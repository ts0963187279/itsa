/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <cmath>

int main(){
  map<int,double> degrees;
  int start_degree = 90;
  for(int i = 0 ; i < 12 ; i++){
    degrees[i] = start_degree;
    start_degree = ((start_degree + 30) % 360) * 1.0;
  }
  int start_time , end_time;
  double hour , min;
  cin >> start_time >> end_time;
  hour = degrees[start_time % 12];
  min = 90.0;
  for(int i = start_time ; i != end_time ; i = (i + 1) % 24){
    for(int j = 0 ; j < 60 ; j++){
      if(abs(hour - min) > 180){
	if(360 - abs(hour - min) >= 88 && 360 - abs(hour - min) <= 92)
	  printf("%02d:%02d degree=%.2lf\n",i,j,360 - abs(hour - min));
      }else{
	if(abs(hour - min) >= 88 && abs(hour - min) <= 92)
	  printf("%02d:%02d degree=%.2lf\n",i,j,abs(hour - min));
      }
      hour += 0.5;
      if(hour > 360)
	hour -= 360;
      min += 6.0;
      if(min > 360)
	min -= 360;
    }
    if(i + 1 == end_time)
      break;
  }
  if(abs(hour - min) > 180){
    if(360 - abs(hour - min) >= 88 && 360 - abs(hour - min) <= 92)
      printf("%02d:%02d degree=%.2lf\n",end_time,0,360 - abs(hour - min));
  }else{
    if(abs(hour - min) >= 88 && abs(hour - min) <= 92)
      printf("%02d:%02d degree=%.2lf\n",end_time,0,abs(hour - min));
  }
  return 0;
}
