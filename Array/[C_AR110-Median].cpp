/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <string>

int main(){
  int n;
  cin >> n;
  cin.ignore();
  while(n -- > 0){
    vector<int> moneys;
    int money,last = 1e9;
    while(true){
      cin >> money;
      if(money > last)
	break;
      last = money;
      moneys.push_back(money);
    }
    vector<int> item(money + 1),weight(money + 1,1e9);
    weight[0] = 0;
    for(int i = 1 ; i < money + 1; i++){
      for(int j = 0 ; j < moneys.size() ; j++){
	if( i - moneys[j] >= 0 && weight[i - moneys[j]] + 1 < weight[i]){
	  weight[i] = weight[i - moneys[j]] + 1;
	  item[i] = j;
	}
      }
    }
    vector<int> times(moneys.size(),0);
    for(int i = money ; i > 0 ;){
      times[item[i]] ++;
      i -= moneys[item[i]];
    }
    int total = 0;
    for(int i = 0 ; i < times.size() ; i++){
      total += times[i];
    }
    cout << total << endl;
    for(int i = 0 ; i < times.size() ; i ++){
      cout << moneys[i] << " " << times[i] << endl;
    }
  }
  return 0;
}
