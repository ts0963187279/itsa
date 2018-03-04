using namespace std;
#include <iostream>

int main(){
  int N,M;
  cin >> N >> M;
  int matrix[N][M],tMatrix[M][N];
  for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < M ; j++){
      cin >> matrix[i][j];
      tMatrix[j][i] = matrix[i][j];
    }
  }
  for(int i = 0 ; i < M ; i++){
    for(int j = 0 ; j < N ; j++){
      cout << tMatrix[i][j];
      if(j < N - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

