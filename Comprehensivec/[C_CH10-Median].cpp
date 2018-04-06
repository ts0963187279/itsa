/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int a,b;
  while(cin >> a){
    int max = 0,i,j;
    cin >> b;
    if( a > b){
      i = b;
      j = a;
    }else{
      i = a;
      j = b;
    }
    for(; i <= j ; i++){
      int n = i,counter = 1;
      while(n != 1){
	if(n % 2 == 0)
	  n = n / 2;
	else
	  n = 3 * n + 1;
	counter ++;
      }
      if(counter > max)
	max = counter;
    }
    cout << a << " " << b << " " << max << endl;
  }
  return 0;
}

