/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int a,b;
  cin >> a >> b;
  vector<vector<int> > matrix1(a,vector<int>(b,0));
  for(int i = 0 ; i < a ; i++)
    for(int j = 0 ; j < b ; j++)
      cin >> matrix1[i][j];
  cin >> a >> b;
  vector<vector<int> > matrix2(a,vector<int>(b,0));
  for(int i = 0 ; i < a ; i++)
    for(int j = 0 ; j < b ; j++)
      cin >> matrix2[i][j];
  for(int i = 0 ; i < a ; i++){
    for(int j = 0 ; j < b ; j++){
      cout << matrix1[i][j] + matrix2[i][j];
      if(j != b - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

