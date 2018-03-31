/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<int> > matrixA(2,vector<int>(2)),matrixB(2,vector<int>(2)),matrixC(2,vector<int>(2,0));
  for(int i = 0 ; i < 2 ; i++)
    for(int j = 0 ; j < 2 ; j++)
      cin >> matrixA[i][j];
  for(int i = 0 ; i < 2 ; i++)
    for(int j = 0 ; j < 2 ; j++)
      cin >> matrixB[i][j];
  int tmp = matrixB[0][1];
  matrixB[0][1] = matrixB[1][0];
  matrixB[1][0] = tmp;
  for(int i = 0 ; i < 2 ; i++){
    for(int j = 0 ; j < 2 ; j ++){
      for(int k = 0 ; k < 2 ; k++){
	matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
      }
    }
  }
  for(int i = 0 ; i < 2 ; i ++){
    for(int j = 0 ; j < 2 ; j++){
      cout << matrixC[i][j];
      if(j != 1 ){
	cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}

