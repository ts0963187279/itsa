using namespace std;
#include<iostream>
int main(){
  int M;
  cin >> M;
  while(M-- > 0){
    int n;
    string input;
    cin >> n;
    int matrix[n][n];
    int newMatrix[n][n];
    int counter = 1;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n ; j++){
	matrix[i][j] = counter ++;
      }
    }
    cin >> input;
    for(int i = 0 ; i < input.size() ; i ++){
      if(input[i] == 'R'){
	for(int i = 0 ; i < n ; i++)
	  for(int j = 0 ; j < n ; j++)
	    newMatrix[j][n-1-i] = matrix[i][j]; 
      }else if(input[i] == 'L'){
	for(int i = 0 ; i < n ; i++)
	  for(int j = 0 ; j < n ; j++)
	    newMatrix[n-1-j][i] = matrix[i][j];
      }else{
	for(int i = 0 ; i < n ; i++)
	  for(int j = 0 ; j < n ; j++)
	    newMatrix[n-1-i][j] = matrix[i][j];
      }
      for(int i = 0 ; i < n ; i++){
	for(int j = 0 ; j < n ; j++){
	  matrix[i][j] = newMatrix[i][j];
	}
      }
    }
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n ; j++){
	printf("%5d",matrix[i][j]);
      }
      cout << endl;
    }
    if(M>0){
      cout << endl;
    }
  }
  return 0;
}
