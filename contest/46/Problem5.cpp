using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>
int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > map(n,vector<int>(n,-1));
    vector<int> risk(n,1e9);
    for(int i = 0 ; i < m ; i++){
      int a,b,r;
      cin >> a >> b >> r;
      map[a][b] = r;
    }
    int current = 0,times = n;
    unordered_set<int> outs;
    risk[0] = 0;
    while(times -- > 0){
      for(int i = 0 ; i < n ; i++){
	if(outs.find(i) == outs.end() && map[current][i] != -1){
	  int tmp;
	  if(map[current][i] < risk[current])
	    tmp = risk[current];
	  else
	    tmp = map[current][i];
	  if(tmp < risk[i])
	    risk[i] = tmp;
	}
      }
      outs.insert(current);
      int max = 1e9;
      for(int i = 0 ; i < n ; i++){
	if(outs.find(i) == outs.end() && risk[i] < max){
	  max = risk[i];
	  current = i;
	}
      }
    }
    if(risk[n - 1] != 1e9)
      cout << risk[n - 1] << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}

