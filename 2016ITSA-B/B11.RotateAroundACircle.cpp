/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    long long int D,K,N,L;
    long long int a ,b;
    cin >> D >> K >> N >> L ;
    if(K % 2 == 0){
      a = ((K + 1) - (2 * (N % D) * (L % D))) % D;
      b = ((K - 1) - (2 * (N % D) * (L % D))) % D;
    }else{
      a = ((K + 1) + (2 * (N % D) * (L % D))) % D;
      b = ((K - 1) + (2 * (N % D) * (L % D))) % D;
    }
    if(a < 0)
      a += D;
    if(b < 0)
      b += D;
    if(a == 0)
      a = D;
    if(b == 0)
      b = D;
    cout << a << " " << b << endl;
  }
  return 0;
}

