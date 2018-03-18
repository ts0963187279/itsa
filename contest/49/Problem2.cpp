/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    int time,day,hour,minute,seconds;
    cin >> time;
    int tmp = time;
    day = time / 86400;
    time -= 86400 * (time / 86400);
    hour = time / 3600;
    time -= 3600 * (time / 3600);
    minute = time / 60;
    time -= 60 * (time / 60);
    seconds = time;
    printf("%d=%02d,%02d,%02d,%02d\n",tmp,day,hour,minute,seconds);
  }
  return 0;
}

