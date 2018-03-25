/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int a,b;
  cin >> a >> b;
  int num = a * b;
  for(int i = 0 ; i < a ; i++){
    for(int j = 0 ; j < b ; j++){
      cout << num-- ;
      if(j != b - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

