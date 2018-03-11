/*Author: Vector Wang*/
using namespace std;
#include <iostream>
int hanoi(int);
int main(){
  int T;
  cin >> T;
  while(T-- > 0){
    int K;
    cin >> K;
    unsigned long long int ans = 0;
    while(K-- > 0){
      unsigned long long int n;
      unsigned long long int temp = 1;
      cin >> n;
      temp = (temp << K) * n;
      ans += temp;
    }
    cout << ans << endl;
  }
  return 0;
}
