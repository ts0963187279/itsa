/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
  int T;
  cin >> T;
  while(T -- > 0){
    int N,G;
    cin >> N;
    vector<int> C(N),W(N);
    for(int i = 0 ; i < N ; i++)
      cin >> C[i] >> W[i];
    vector<int> backpack(31,0);
    for(int i = 0 ; i < N ; i++){
      for(int j = 30 ; j - W[i] >= 0 ; --j){
	if(backpack[j] < C[i] + backpack[j - W[i]])
	  backpack[j] = C[i] + backpack[j - W[i]];
      }
    }
    cin >> G;
    int ans = 0;
    while(G -- > 0){
      int M;
      cin >> M;
      ans += backpack[M];
    }
    cout << ans << endl;
  }
  return 0;
}
