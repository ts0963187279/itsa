using namespace std;
#include <iostream>
int main(){
  int N,m,n,k;
  cin >> N;
  while(N-- >0){
    cin >> m >> n >> k;
    int matrix[m][n];
    int max = -99999;
    for(int i = 0 ; i < m ; i++){
      for(int j = 0 ; j < n ; j++){
	cin >> matrix[i][j];
      }
    }
    for(int i = 0 ; i < m - k + 1 ; i++){
      for(int j = 0 ; j < n - k + 1 ; j ++){
	int sum = 0;
	for(int row = 0 ; row < k ; row++){
	  for(int col = 0 ; col < k ; col++){
	    sum += matrix[i+row][j+col];
	  }
	}
	if(sum > max){
	  max = sum;
	}
      }
    }
    cout << max << endl;
  }
  
  return 0;
}
