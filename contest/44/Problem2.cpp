/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    vector<vector<int> > map(8,vector<int>(8));
    for(int i = 0 ; i < 8 ; i++)
      for(int j = 0 ; j < 8 ; j++)
	cin >> map[i][j];
    bool find = false;
    for(int i = 0 ; i < 8 ; i ++){
      for(int j = 0 ; j < 8 ; j++){
	if(map[i][j] == 1){
	  for(int k = 0 ; k < 8 ; k++){
	    if(j != k && map[i][k] == 1){
	      find = true;
	      break;
	    }
	    if(i != k && map[k][j] == 1){
	      find = true;
	      break;
	    }
	    if(k > 0){
	      if(k + j < 8 && k + i < 8 && map[i + k][j + k] == 1){
		find = true;
		break;
	      }
	      if(j - k >= 0 && i - k >= 0 && map[i - k][j - k] == 1){
		find = true;
		break;
	      }
	      if(i - k >= 0 && j + k < 8 && map[i - k][j + k] == 1){
		find = true;
		break;
	      }
	      if(i + k < 8 && j - k >= 0 && map[i + k][j - k] == 1){
		find = true;
		break;
	      }
	    }
	  }
	  if(find){
	    cout << "X" << endl;
	    break;
	  }
	}
	if(find)
	  break;
      }
      if(find)
	break;
    }
    if(!find)
      cout << "O" << endl;
  }
  return 0;
}

