/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m,v;
    cin >> m >> v;
    int matrix[m][m];
    int ans[m][m];
    for(int i = 0 ; i < m ; i++)
      for(int j = 0 ; j < m ; j++){
	matrix[i][j] = 0;
	ans[i][j] = 0;
      }
    while(v -- > 0){
      int a,b,value;
      char temp;
      cin >> temp >> a >> temp >> b >> temp >> temp >> value;
      matrix[a-1][b-1] = value;
    }
    for(int i = 0 ; i < m ; i++){
      for(int j = 0 ; j< m ;j++){
	int value = 0;
	for(int k = 0 ; k < m ;k++){
	  value += matrix[j][k] * matrix[i][k];
	}
	ans[j][i] = value;
      }
    }
    for(int i = 0 ; i < m ; i++){
      for(int j = 0 ; j < m ; j++){
	cout << ans[i][j];
	if(j != m - 1)
	  cout << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

