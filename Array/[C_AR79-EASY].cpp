/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <iomanip>

int main(){
  while(true){
    int n;
    cin >> n ;
    if(n == -1)
      break;
    double top = (n * n * n * 1.0) / 3;
    cout << fixed << setprecision(1) << top << endl;
  }
  return 0;
}

