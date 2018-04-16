/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
int main(){
  int Y;
  cin >> Y;
  while(Y -- > 0){
    int N;
    cin >> N;
    vector<int> S(N),team_a,team_b;
    for(int i = 0 ; i < N ; i++){
      int P,W;
      cin >> P >> W;
      S[i] = P / W;
    }
    int all = 0;
    for(int i = 0 ; i < S.size() ; i++)
      all += S[i];
    vector<int> dp(all/2 + 1,0);
    vector<int> times(all/2 + 1,0);
    for(int i = 0 ; i < S.size() ; i++){
      for(int j = dp.size() - 1 ; j >= S[i] ; j--){
	if(S[i] + dp[j - S[i]] > dp[j]){
	  dp[j] = S[i] + dp[j - S[i]];
	  times[j] = times[j - S[i]] + 1;
	}
      }
    }
    cout << abs(all - 2*dp.back()) << endl;
    if(times[all / 2] <= S.size() / 2)
      cout << times[all / 2] << endl;
    else
      cout << S.size() - times[all / 2] << endl;
  }
  return 0;
}
