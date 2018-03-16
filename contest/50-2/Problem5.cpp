/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int a,b;
    bool can = true;
    cin >> a >> b;
    for(int i = 2 ; i <= a ; i++){
      if(a % i == 0 && b % i == 0){
	can = false;
	break;
      }
    }
    if(can){
      int i = 1 , j = 1;
      for(;a * i - b * j != 1 ;i++){
	for(;b * j < a * i;j++){
	  if(a * i - b * j == 1)
	    break;
	}
	if(a * i - b * j == 1)
	  break;
      }
      cout << i << " " << j << endl;
    }else
      cout << "No solution!" << endl;
  }
  return 0;
}
