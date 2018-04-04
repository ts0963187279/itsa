/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<char> > game(3,vector<char>(3));
  for(int i = 0 ; i < 3 ; i++){
    cin >> game[i][0];
    for(int j = 1 ; j < 3; j++){
      char tmp;
      cin >> tmp >> game[i][j];
    }
  }
  if(game[0][0] == game[0][1] && game[0][1] == game[0][2])
    cout << game[0][0] << endl;
  else if(game[1][0] == game[1][1] && game[1][1] == game[1][2])
    cout << game[1][0] << endl;
  else if(game[2][0] == game[2][1] && game[2][1] == game[2][2])
    cout << game[2][0] << endl;
  else if(game[0][0] == game[1][1] && game[1][1] == game[2][2])
    cout << game[0][0] << endl;
  else if(game[0][2] == game[1][1] && game[1][1] == game[2][0])
    cout << game[0][2] << endl;
  else
    cout << 1 << endl;
  return 0;
}

