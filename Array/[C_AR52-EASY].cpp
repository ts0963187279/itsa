/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  vector<vector<char> > graph(n , vector<char>(n * 2 - 1,'@'));
  for(int i = 0 ; i <= n / 2 ; i++){
    for(int j = 0 ; j < 1 + 2 * i ; j++){
      graph[i][n - i - 1 + j] = '*';
    }
  }
  for(int i = n / 2,counter = 0 ; i < n ; i++,counter++){
    for(int j = 0 ; j < 1 + 2 * counter ; j++){
      graph[i][n / 2 - counter + j] = '*';
    }
  }
  for(int i = n / 2,counter = 0 ; i < n ; i++,counter++){
    for(int j = 0 ; j < 1 + 2 * counter ; j++){
      graph[i][n + n / 2 - 1 - counter + j] = '*';
    }
  }  
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n * 2 - 1 ; j++){
      cout << graph[i][j];
    }
    cout << endl;
  }
  return 0;
}
