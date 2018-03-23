/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int full,half;
    cin >> full >> half;
    cout << full * 250 + half * 175 << endl;
  }
  return 0;
}
