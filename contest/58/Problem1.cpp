/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int m;
  cin >> m;
  while(m-- >0){
    int N,sum = 0;
    cin >> N;
    for(int i = 1 ; i <= N ; i++){
      if(i % 3 == 0)
	sum += i;
    }
    cout << sum << endl;
  }
  return 0;
}

