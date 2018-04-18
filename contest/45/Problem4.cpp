/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int m;
  cin >> m;
  vector<vector<int> > temp(m,vector<int>(m));
  for(int i = 0 ; i < m ; i ++)
    for(int j = 0 ; j < m ; j++)
      cin >> temp[i][j];
  int n;
  cin >> n;
  vector<vector<int> > image(n,vector<int>(n));
  int small = 1e9,s_i,s_j;
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < n ; j++)
      cin >> image[i][j];
  for(int i = 0 ; i < n - m + 1; i ++){
    for(int j = 0 ; j < n - m + 1; j ++){
      int tmp = 0;
      for(int k = 0 ; k < m ; k ++){
	for(int x = 0 ; x < m ; x ++){
	  if(image[i + k][j + x] != temp[k][x])
	    tmp ++;
	}
      }
      if(tmp < small){
	s_i = i;
	s_j = j;
	small = tmp;
      }
    }
  }
  cout << s_i + 1 << " " << s_j + 1 << endl;
  return 0;
}

