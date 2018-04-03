/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<char> > map(11,vector<char>(11,'-'));
  for(int i = 0 ; i < 9 ; i++)
    for(int j = 0 ; j < 9 ; j++)
      cin >> map[i + 1][j + 1];
  for(int i = 0 ; i < 9 ; i++){
    for(int j = 0 ; j < 9 ; j++){
      if(map[i + 1][j + 1] == '#')
	cout << 9;
      else{
	int counter = 0;
	for(int k = 0 ; k < 3 ; k++){
	  for(int g = 0 ; g < 3 ; g++){
	    if(map[i + k][j + g] == '#')
	      counter ++;
	  }
	}
	cout << counter;
      }
    }
    cout << endl;
  }
  return 0;
}

