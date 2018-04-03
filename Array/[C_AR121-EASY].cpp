/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> breads(N);
  for(int i = 0 ; i < N ; i++)
    cin >> breads[i];
  while(M -- > 0){
    int Q,R;
    cin >> Q >> R;
    int sum = 0;
    for(int i = Q - 1 ; i < R ; i++)
      sum += breads[i];
    cout << sum << endl;
  }
  return 0;
}

