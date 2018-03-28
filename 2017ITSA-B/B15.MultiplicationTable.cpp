/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int a,b,k,counter = 0;
    cin >> a >> k;
    for(int i = 1 ; i <= a ; i++){
      for(int j = 1 ; j <= a; j ++){
	if(i * j == k)
	  counter ++;
      }
    }
    cout << counter << endl;
  }
  return 0;
}

