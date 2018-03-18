/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    int sHour,sMinute,eHour,eMinute,minute,money = 0;
    cin >> sHour >> sMinute >> eHour >> eMinute;
    minute = (eHour - sHour) * 60 + (eMinute - sMinute);
    for(int i = minute , part = 0 ; i > 30 ; i -= 30 , part += 30){
      if(part < 120)
	money += 30;
      else if(part < 240)
	money += 40;
      else
	money += 60;
    }
    cout << money << endl;
  }
  return 0;
}
