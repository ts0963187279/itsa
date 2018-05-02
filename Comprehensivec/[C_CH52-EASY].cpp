/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    unsigned long long int virus = 79 , white = 10 , t;
    cin >> t;
    for(int i = 2 ; i <= t * 2 ; i++){
      if((i + 1) % 2 == 0)
	virus -= white;
      if(i % 4 == 0)
	virus *= 2;
      if(i % 6 == 0)
	white *= 2;
    }
    cout << white << endl;
    cout << virus << endl;
  }
  return 0;
}

