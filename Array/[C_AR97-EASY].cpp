/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int> > a(n,vector<int>(m)),b(n,vector<int>(m));
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < m ; j++)
      cin >> a[i][j];
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < m ; j++)
      cin >> b[i][j];
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cout << a[i][j] * b[i][j];
      if(j != m - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

