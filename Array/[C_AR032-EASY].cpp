using namespace std;
#include <iostream>
#include <sstream>
int main(){
  int N;
  cin >> N;
  string matrix[8][N][N];
  for(int x = 0 ; x < 8 ; x++){
    for(int i = 0 ; i < N ; i++){
      for(int j = 0 ; j < N ; j++){
	if(x == 0){
	  stringstream stringStream;
	  stringStream << char(int('A') + i ) << j + 1;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 1){
	  stringstream stringStream;
	  stringStream << char(int('A') + N - j - 1) << i + 1;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 2){
	  stringstream stringStream;
	  stringStream << char(int('A') + N - i - 1) << N - j;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 3){
	  stringstream stringStream;
	  stringStream << char(int('A') + j) << N - i;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 4){
	  stringstream stringStream;
	  stringStream << char(int('A') + i) << N - j;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 5){
	  stringstream stringStream;
	  stringStream << char(int('A') + N - j - 1) << N - i;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 6){
	  stringstream stringStream;
	  stringStream << char(int('A') + N - i - 1) << j + 1;
	  matrix[x][i][j] = stringStream.str();
	}
	if(x == 7){
	  stringstream stringStream;
	  stringStream << char(int('A') + j) << i + 1;
	  matrix[x][i][j] = stringStream.str();
	}
	cout << matrix[x][i][j];
	if(j + 1 < N)
	  cout << " ";
      }
      cout << endl;
    }
    if(x + 1 < 8)
      cout << endl;
  }  
  return 0;
}
