/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int N;
  cin >> N;
  while(N-- > 0){
    int a,b,c;
    cin >> a >> b >> c;
    for(int i = 0 ; i < 9999999 ; i++){
      if((i - a) % 7 == 0 && (i + b) % 11 == 0 && (i - c) % 17 == 0){
	cout << i << endl;
	break;
      }
    }
  }
  return 0;
}

