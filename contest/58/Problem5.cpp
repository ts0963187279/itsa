/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int r(int,int);
int main(){
  int N;
  cin >> N;
  while(N-- >0){
    int m,n;
    cin >> m;
    getchar();
    cin >> n;
    cout << r(m,n)<<endl;
  }
  return 0;
}
int r(int m,int n){
  int ans ;
  if(m == n || n == 1)
    return 1;
  else
    return ans = r(m-1,n-1) + n * r(m-1,n);
}
