/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    char command;
    cin >> command;
    vector<vector<int> > game(4,vector<int>(4,0));
    for(int i = 0 ; i < 4 ; i ++){
      for(int j = 0 ; j < 4 ; j++){
	cin >> game[i][j];
      }
    }
    switch(command){
    case 'U' :
      for(int i = 0 ; i < 4 ; i ++){
	for(int j = 0 ; j < 4 ; j++){
	  if(game[i][j] != 0 && i != 3 && game[i + 1][j] == game[i][j]){
	    game[i][j] *= 2;
	    game[i + 1][j] = 0;
	  }
	  for(int k = i - 1 ; k >= 0 ; k--){
	    if(game[k][j] != 0)
	      break;
	    game[k][j] = game[i][j];
	    game[i][j] = 0;
	  }
	}
      }
      break;
    case 'D' :
      for(int i = 3 ; i >= 0 ; i --){
	for(int j = 0 ; j < 4 ; j++){
	  if(game[i][j] != 0 && i != 0 && game[i - 1][j] == game[i][j]){
	    game[i][j] *= 2;
	    game[i - 1][j] = 0;
	  }
	  for(int k = i + 1 ; k < 4 ; k++){
	    if(game[k][j] != 0)
	      break;
	    game[k][j] = game[i][j];
	    game[i][j] = 0;
	  }	  
	}
      }
      break;
    case 'L' :
      for(int i = 0 ; i < 4 ; i ++){
	for(int j = 0 ; j < 4 ; j ++){
	  if(game[i][j] != 0 && j != 3 &&game[i][j] == game[i][j + 1]){
	    game[i][j] *= 2;
	    game[i][j + 1] = 0;
	  }
	  for(int k = j - 1 ; k >= 0 ; k--){
	    if(game[i][k] != 0)
	      break;
	    game[i][k] = game[i][j];
	    game[i][j] = 0;
	  }	  
	}
      }
      break;
    case 'R' :
      for(int i = 0 ; i < 4 ; i ++){
	for(int j = 3 ; j >= 0 ; j --){
	  if(game[i][j] != 0 && j != 0 && game[i][j - 1] == game[i][j]){
	    game[i][j] *= 2;
	    game[i][j - 1] = 0;
	  }
	  for(int k = j + 1; k < 4 ; k++){
	    if(game[i][k] != 0)
	      break;
	    game[i][k] = game[i][j];
	    game[i][j] = 0;
	  }	  
	}
      }
      break;
    }
    for(int i = 0 ; i < 4 ; i ++){
      for(int j = 0 ; j < 4 ; j ++){
	cout << game[i][j];
	if(j != 3)
	  cout << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

