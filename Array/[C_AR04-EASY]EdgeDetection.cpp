using namespace std;
#include <iostream>
int main(){
  int N;
  cin >> N;
  while(N-- >0){
    int n,m;
    cin >> n >> m;
    int matrix[n+2][m+2];
    for(int i = 0 ; i < n + 2 ; i++){
      for(int j = 0 ; j < m + 2; j++){
	if(i == 0 || i == n+1 || j == 0 || j== m+1)
	  matrix[i][j] = 0;
	else
	  cin >> matrix[i][j];
      }
    }
    for(int i = 1; i < n + 1 ; i++){
      for(int j = 1 ; j < m + 1 ; j++){
	if(matrix[i][j] == 1 && (matrix[i+1][j] == 0 || matrix[i][j-1] == 0 || matrix[i][j+1] == 0 || matrix[i-1][j] == 0))
	  cout << "0 ";
	else
	  cout << "_ ";
      }
      cout << endl;
    }
    if(N > 0)
      cout << endl;
  }
  return 0;
}
