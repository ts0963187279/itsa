/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int T;
  cin >> T;
  while(T-- > 0){
    unsigned long long int n,ans = 1,i = 0,j;
    cin >> n;
    for(unsigned long long int k = 282475249,m = 0 ; k >= 1 ; m = k , k /= 49){
      for(i -= m,i += k ; i <= n ; i += k){
	for(j = i ; j % 7 == 0 ; j /= 7);
	ans = (ans * (j % 7)) % 7;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

