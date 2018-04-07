/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<int> > mod_a(3,vector<int>(3)) , mod_b(3,vector<int>(3));
  bool same = true;
  for(int i = 0 ; i < 3 ; i++)
    for(int j = 0 ; j < 3 ; j++)
      cin >> mod_a[i][j];
  for(int i = 0 ; i < 3 ; i++)
    for(int j = 0 ; j < 3 ; j++)
      cin >> mod_b[i][j];
  for(int i = 0 ; i < 4 ; i++){
    same = true;
    for(int j = 0 ; j < 3 ; j++){
      for(int k = 0 ; k < 3 ; k++){
	if(mod_a[j][k] != mod_b[j][k]){
	  same = false;
	  break;
	}
      }
      if(!same)
	break;
    }
    if(same){
      cout << 1 << endl;
      break;
    }
    vector<vector<int> > tmp(3,vector<int>(3));
    for(int i = 0 ; i < 3 ; i++)
      for(int j = 0 ; j < 3 ; j++)
	tmp[i][j] = mod_a[2 - j][i];
    mod_a = tmp;
  }
  if(!same)
    cout << 0 << endl;
  return 0;
}

