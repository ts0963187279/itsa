/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int al,aw,bl,bw;
    cin >> al >> aw >> bl >> bw;
    if(al <= bl && aw <= bw)
      cout << "YES" << endl;
    else if(al <= bw && aw <= bl)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}

