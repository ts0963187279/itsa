/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n,ans = 0;
  cin >> n;
  while(n -- > 0){
    int m;
    cin >> m;
    ans ^= m;
  }
  if(ans > 0)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;
}
