/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>

int main(){
  int N;
  cin >> N;
  vector<int> change(4),items(3);
  change[0] = 50; change[1] = 10; change[2] = 5; change[3] = 1;
  items[0] = 0; items[1] = 17; items[2] = 25;
  while(N -- > 0){
    int k,item,money,times;
    map<int,int> moneys;
    cin >> k;
    getchar();
    cin >> item;
    getchar();
    cin >> times;
    money = k - items[item] * times;
    for(int i = 0 ; i < 4 ; i ++){
      if(change[i] <= money){
	moneys[change[i]] = money / change[i];
	money %= change[i];
      }
    }
    int counter = 0;
    for(map<int,int>::iterator it = moneys.begin() ; it != moneys.end() ; it++){
      if(counter > 0)
	cout << ",";
      cout << "Coin "<< it->first << ":" << it->second;
      counter ++;
    }
    cout << endl;
  }
  return 0;
}

