/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int N;
  cin >> N;
  while(N-- > 0){
    int input,last = 999999,money; 
    vector<int> change;
    while(true){
      cin >> input;
      if(input > last){
	money = input;
	break;
      }
      change.push_back(input);
      last = input;
    }
    vector<int> backpack(money + 1,0);
    vector<int> times(money + 1,900000);
    vector<int> quantity(change.size(),0);
    times[0] = 0;
    for(int i = 0 ; i <= money ; i++){
      for(int j = 0 ; j < change.size(); j++){
	if(i - change[j] >= 0){
	  if(times[i - change[j]] + 1 <= times[i]){
	    times[i] = times[i - change[j]] + 1;
	    backpack[i] = j;
	  }
	}
      }
    }
    cout << times.back() << endl;
    for(long long int i = money ; i > 0 ;){
      quantity[backpack[i]] ++;
      i = i - change[backpack[i]];
    }
    for(int i = 0 ; i < quantity.size() ; i++)
      cout << change[i] << " " << quantity[i] << endl;
  }
  return 0;
}
