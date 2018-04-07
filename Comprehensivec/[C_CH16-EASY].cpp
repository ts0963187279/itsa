/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<int> > map(9,vector<int>(9)),mod(3,vector<int>(3));
  for(int i = 0 ; i < 9 ; i++)
    for(int j = 0 ; j < 9 ; j++)
      cin >> map[i][j];
  for(int i = 0 ; i < 3 ; i++)
    for(int j = 0 ; j < 3 ; j++)
      cin >> mod[i][j];
  int counter = 0;
  for(int i = 0 ; i < 6 ; i++){
    for(int j = 0 ; j < 6 ; j++){
      bool same = true;
      for(int k = 0 ; k < 3 ; k++){
	for(int m = 0 ; m < 3 ; m++){
	  if(map[i + k][j + m] != mod[k][m]){
	    same = false;
	    break;
	  }
	}
	if(!same)
	  break;
      }
      if(same)
	counter ++;
    }
  }
  cout << counter <<endl;
  return 0;
}

