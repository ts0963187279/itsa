/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>
int main(){
  int m;
  cin >> m;
  while(m -- > 0){
    int n;
    cin >> n;
    double ans = 0 , width = 1.0 / n , current = 0;
    for(int i = 0 ; i < n ; i++){
      current += width;
      ans += pow(current,2) * width;
    }
    printf("%.4lf\n",ans);
  }
  return 0;
}

