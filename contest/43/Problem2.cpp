/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > map(n + 2,vector<int>(m + 2,0));
    for(int i = 1 ; i < n + 1 ; i ++)
      for(int j = 1 ; j < m + 1 ; j++)
	cin >> map[i][j];
    for(int i =  1 ; i < n + 1; i++){
      for(int j = 1 ; j < m + 1 ; j++){
	if(map[i][j] == 1 && (map[i][j - 1] == 0 || map[i][j + 1] == 0 || map[i - 1][j] == 0 || map[i + 1][j] == 0))
	  cout << "0 ";
	else
	  cout << "_ ";
      }
      cout << endl;
    }
    if(N != 0)
      cout << endl;
  }
  return 0;
}
