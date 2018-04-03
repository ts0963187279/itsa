/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<char> > maze(7,vector<char>(7));
  for(int i = 0 ; i < 7 ; i ++)
    for(int j = 0 ; j < 7 ; j++)
      cin >> maze[i][j];
  char command;
  int current_i = 1,current_j = 1,counter = 0;
  bool find = false;
  while(cin >> command){
    counter ++;
    if(current_j + 1 < 7 && current_j - 1 >= 0 && current_i + 1 < 7 && current_i - 1 >=0){
      if(command == 'N'){
	if(maze[current_i - 1][current_j] != '#')
	  current_i --;
      }
      if(command == 'S'){
	if(maze[current_i + 1][current_j] != '#')
	  current_i ++;
      }
      if(command == 'W'){
	if(maze[current_i][current_j - 1] != '#')
	  current_j --;
      }
      if(command == 'E'){
	if(maze[current_i][current_j + 1] != '#')
	  current_j ++;
      }
      if(maze[current_i][current_j] == '$'){
	find = true;
	break;
      }
    }
  }
  if(find)
    cout << "Yes\n" << counter << endl;
  else
    cout << "No" << endl;
  return 0;
}

