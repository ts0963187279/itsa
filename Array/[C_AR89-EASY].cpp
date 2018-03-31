/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  int m;
  cin >> m;
  vector<vector<int> > matrix(m,vector<int>(m)),rMatrix(m,vector<int>(m)),tmpMatrix(m,vector<int>(m));
  for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < m ; j++){
      cin >> matrix[i][j];
    }
  }
  while(n -- > 0){
    tmpMatrix = matrix;
    string commands;
    cin >> commands;
    int rotate = 0;
    for(int i = 0 ; i < commands.size() ; i++){
      if(commands[i] == 'A')
	rotate += 90;
      if(commands[i] == 'B')
	rotate += 180;
      if(commands[i] == 'C')
	rotate += 270;
    }
    rotate %= 360;
    for(int i = 0 ; i < rotate ; i+=90){
      for(int j = 0 ; j < m ; j++){
	for(int k = 0 ; k < m ; k++){
	  rMatrix[j][k] = tmpMatrix[m - k - 1][j];
	}
      }
      tmpMatrix = rMatrix;
    }
    for(int i = 0 ; i < m ; i++){
      for(int j = 0 ; j < m ; j++){
	cout << tmpMatrix[i][j] << " ";
      }
      cout << endl;
    }
    if(n != 0)
      cout << endl;
  }
  return 0;
}

