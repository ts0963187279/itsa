/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>
int main(){
  string target,current;
  int n;
  cin >> n;
  while(n -- > 0){
    cin >> current >> target;
    int total = 0;
    for(int i = 0 ; i < current.size() ; i++){
      int times = abs(int(target[i]) - int(current[i]));
      if(times > 5){
	times =  10 - times;
      }
      total += times;
    }
    cout << total << endl;
  }
  return 0;
}
