/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m,a = 0 ,b = 0;
    cin >> m;
    for(int i = 0 ; i < m ; i++){
      int guess,ans = 0;
      string hands;
      cin >> guess >> hands;
      for(int j = 0 ; j < 4 ; j ++){
	if(hands[j] == 'O')
	  ans += 5;
      }
      if(guess == ans){
	if(i % 2 == 0)
	  a ++;
	else
	  b ++;
      }
    }
    cout << a << " " << b << endl;
  }
  return 0;
}

