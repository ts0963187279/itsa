/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- >0){
    int m;
    cin >> m;
    int top = 3,sum = 0;
    while(top <= m + 1){
      int product = 1;
      for(int i = top ; i > top - 3 ; i--)
	product *= i;
      sum += product;
      top ++;
    }
    cout << sum << endl;
  }
  return 0;
}

