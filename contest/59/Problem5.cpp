/*Author: Vector Wang*/
using namespace std;
#include <iostream>
int main(){
  int N;
  cin >> N;
  while(N-- >0){
    int P,counter = 0,ans = 0;
    cin >> P;
    for(int i = 2 ; i <= P ; i++){
      if(P % i == 0){
	P = P / i;
	counter++;
      }
    }
    for(int i = 0 ; i < (1 << counter) ; i++)
      ans++;
    cout << (ans - 2)/2 <<endl;
  }
  return 0;
}
