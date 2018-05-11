/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int a,b,total;
  char tmp;
  cin >> a >> tmp >> b;
  total = a + b;
  vector<vector<int> > DP(a + 1,vector<int>(b + 1));
  for(int i = 0 ; i <= a ; i++)
    DP[i][0] = 1;
  for(int i = 1 ; i <= a ; i++){
    for(int j = 1 ; j <= b  ; j++){
      if(j > i)
	DP[i][j] = 0;
      else
	DP[i][j] = DP[i - 1][j] + DP[i][j - 1];
    }
  }
  cout << DP[a][b] << endl;
  return 0;
}

