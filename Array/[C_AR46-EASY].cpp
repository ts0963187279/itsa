/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
  double input,sum = 0;
  while(cin >> input){
    sum += pow(input,2);
  }
  cout << fixed << setprecision(6) << sum << endl;
  return 0;
}
