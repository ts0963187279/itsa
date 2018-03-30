/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

void search(vector<vector<char> > &map,int i , int j){
  if(map[i][j] == '1')
    return;
  else{
    map[i][j] = '1';
    search(map, i - 1 , j);
    search(map, i , j - 1);
    search(map, i , j + 1);
    search(map, i + 1 , j);
  }
}
int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m;
    cin >> m;
    vector<vector<char> > map(m+2,vector<char>(m+2));
    for(int i = 0 ; i < m + 2 ; i++){
      for(int j = 0 ; j < m + 2; j++){
	if(i == 0 || j == 0 || i == m + 1|| j == m + 1)
	  map[i][j] = '1';
      }
    }
    for(int i = 1 ; i < m + 1 ; i++)
      for(int j = 1 ; j < m + 1; j++)
	cin >> map[i][j];
    int counter = 0;
    bool other = false;
    for(int i = 1 ; i < m + 1; i++){
      for(int j = 1 ; j < m + 1; j++){
	if(map[i][j] == '0'){
	  search(map,i,j);
	  counter ++;
	}
      }
    }
    cout << counter << endl;
  }
  return 0;
}

