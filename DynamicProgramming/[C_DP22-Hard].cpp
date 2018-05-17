/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  string a,b;
  cin >> a >> b;
  vector<vector<int> > DP(b.size() + 1 , vector<int>(a.size() + 1,0));
  vector<vector<int> > trace(b.size() + 1 , vector<int>(a.size() + 1));
  for(int i = 0 ; i < a.size() ; i++)
    trace[0][i] = 3;
  for(int i = 0 ; i < b.size() ; i++)
    trace[i][0] = 2;
  trace[0][0] = 4;
  DP[0][0] = 0;
  for(int i = 1 ; i <= b.size() ; i++){
    for(int j = 1 ; j <= a.size() ; j++){
      if(b[i - 1] == a[j - 1]){
	DP[i][j] = DP[i - 1][j - 1] + 1;
	trace[i][j] = 4;
      }else{
	if(DP[i][j - 1] == DP[i - 1][j]){
	  DP[i][j] = DP[i - 1][j - 1];
	  trace[i][j] = 1;
	}else{
	  DP[i][j] = DP[i - 1][j] > DP[i][j - 1] ? DP[i - 1][j] : DP[i][j - 1];
	  trace[i][j] = DP[i - 1][j] > DP[i][j - 1] ? 2 : 3;
	}
      }
    }
  }
  int x = b.size(),y = a.size() , D = 0, I = 0, S = 0;
  while(x >= 0 && y >= 0){
    if(trace[x][y] == 1){
      S++;
      x--;
      y--;
    }else if(trace[x][y] == 4){
      x--;
      y--;
    }else if(trace[x][y] == 2){
      I++;
      x--;
    }else if(trace[x][y] == 3){
      D++;
      y--;
    }
  }
  cout << S << " " << I << " " << D << endl;
  return 0;
}

