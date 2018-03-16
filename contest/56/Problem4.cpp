/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int ans = 0,m;
    cin >> m;
    while(m -- > 0){
      int tmp;
      cin >> tmp;
      ans ^= tmp;
    }
    if(ans == 0){
      cout << "no" << endl;
    }else
      cout << "yes" << endl;
  }
  return 0;
}
