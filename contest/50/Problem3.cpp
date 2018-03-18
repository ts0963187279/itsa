/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>
int main(){
  while(true){
    int input,counter = -1;
    cin >> input;
    if(input == -1)
      break;
    for(double tmp = input/1.0 ; input != 99 ; tmp = pow(tmp,0.5) * 10){
      tmp = floor(tmp * 10 + 0.5) / 10.0;
      input = floor(tmp);
      counter ++;
    }
    cout << counter << endl;
  }
  return 0;
}
