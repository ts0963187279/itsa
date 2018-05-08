/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<int> coins(4),items(2);
  coins[0] = 1;
  coins[1] = 5;
  coins[2] = 10;
  coins[3] = 50;
  items[0] = 17;
  items[1] = 25;
  int k,item,quantity,money,change;
  char tmp;
  cin >> k >> tmp >> item >> tmp >> quantity;
  money = items[item - 1] * quantity;
  change = k - money;
  vector<int> DP(change + 1,1e9),back(change + 1);
  DP[0] = 0;
  for(int i = 1 ; i < DP.size() ; i++){
    for(int j = 0 ; j < 4 ; j++){
      if(i - coins[j] >= 0 && DP[i] > DP[i - coins[j]] + 1){
	DP[i] = DP[i - coins[j]] + 1;
	back[i] = j;
      }
    }
  }
  vector<int> ans(4,0);
  for(int j = DP.size() - 1 ; j > 0 ;){
    ans[back[j]] ++;
    j -= coins[back[j]];
  }
  bool keep = false , start = false;;
  for(int i = 0 ; i < 4 ; i++){
    keep = false;
    if(ans[i] != 0){
      cout << "Coin " << coins[i] << ":" << ans[i];
      start = true;
    }
    for(int j = i + 1 ; j < 4 ; j++){
      if(ans[j] != 0)
	keep = true;
    }
    if(keep && start)
      cout << ",";
  }
  cout << endl;
  return 0;
}
