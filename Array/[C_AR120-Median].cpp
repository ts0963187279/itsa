/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  vector<unsigned long long int> list(n + 1,0);
  list[0] = 1;
  for(int i = 1 ; i <= n ; i++){
    for(int j = 0 ; j < i ; j++){
      list[i] += list[j] * list[i - j - 1];
    }
  }
  cout << "f(" << n << ")=" << list[n]  << endl;
  return 0;
}

