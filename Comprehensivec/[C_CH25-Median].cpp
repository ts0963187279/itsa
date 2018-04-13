/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<int> > map(7,vector<int>(7));
  for(int i = 0 ; i < 7 ; i ++)
    for(int j = 0 ; j < 7 ; j ++)
      cin >> map[i][j];
  for(int i = 0 ; i < 7 ; i ++){
    for(int j = 0 ; j < 7 ; j++){
      if(map[i][j] == 2){
	for(int k = j ; k < 7 ; k++){
	  if(map[i][k] == 1)
	    break;
	  map[i][k] = 3;
	}
	for(int k = j ; k >= 0 ; k--){
	  if(map[i][k] == 1)
	    break;
	  map[i][k] = 3;
	}
	for(int k = i ; k >= 0 ; k--){
	  if(map[k][j] == 1)
	    break;
	  map[k][j] = 3;
	}
	for(int k = i ; k < 7 ; k++){
	  if(map[k][j] == 1)
	    break;
	  map[k][j] = 3;
	}
      }
    }
  }
  int counter = 0;
  for(int i = 0 ; i < 7 ; i ++)
    for(int j = 0 ; j < 7 ; j++)
      if(map[i][j] == 0)
	counter ++;
  cout << counter << endl;
  return 0;
}

