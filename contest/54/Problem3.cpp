/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    double T;
    char tmp;
    int seconds;
    cin >> T;
    cin >> tmp;
    cin >> seconds;
    for(int i = 1 ; i <= seconds ; i++)
      T = T + i * 2.71828;
    double ans = floor(T * 10000 + 0.5)/10000.0;
    printf("%.4lf\n",ans);
  }
  return 0;
}
