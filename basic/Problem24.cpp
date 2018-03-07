/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>

int main(){
  double r,sum = 0;
  int n,p;
  cin >> r >> n >> p;
  for(int i = 0 ; i < n ; i++){
    sum += p;
    sum += sum * r ;
  }
  printf("%.0lf\n",floor(sum));
  return 0;
}
