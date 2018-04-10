/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<unsigned long long int> > dp(13,vector<unsigned long long int>(13,0));
  for(int i = 0 ; i < 13 ; i++)
    for(int j = 0 ; j <= i ; j++){
      if(j == 0)
	dp[i][j] = 0;
      if(i == j)
	dp[i][j] = 1;
    }
  for(int i = 1; i < 13 ; i ++)
    for(int j = 1 ; j < i ; j++)
      dp[i][j] = j * dp[i - 1][j] + dp[i - 1][j - 1];
  int t;
  cin >> t ;
  while(t -- > 0){
    int n,m;
    unsigned long long int hierarchy = 1;
    cin >> n;
    getchar();
    cin >> m;
    for(int i = 1 ; i <= m ; i++ )
      hierarchy *= i;
    cout << hierarchy * dp[n][m] << endl;
  }
  return 0;
}

