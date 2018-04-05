/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- >0){
    int A,F;
    cin >> A >> F;
    while(F -- > 0){
      for(int i = 1 ; i <= A ; i++){
	for(int j = 0 ; j < i ; j++){
	  cout << i ;
	}
	cout << endl;
      }
      for(int i = A - 1 ; i > 0 ; i--){
	for(int j = 0 ; j < i ; j++){
	  cout << i;
	}
	cout << endl;
      }
      if( F != 0)
	cout << endl;
    }
    if(n != 0)
      cout << endl;
  }
  return 0;
}

