/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>
int main(){
  int n,m;
  cin >> n >> m;
  while(true){
    n -= (int)ceil(((n * 1.0) / 4)* 3);
    if(n < m)
      break;
    n += m;
  }
  cout << n << endl;
  return 0;
}

