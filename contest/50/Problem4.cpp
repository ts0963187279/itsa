/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int input;
    cin >> input;
    cout << ceil(log(input * 1.0) / log(3.0)) << endl;
  }
  return 0;
}

