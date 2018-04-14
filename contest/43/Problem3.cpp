/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

bool find_destination(vector<vector<char> > &maze, int i, int j){
  if(maze[i][j] != '0')
    return false;
  else if(i == maze.size() - 2 && j == maze.size() - 2){
    maze[i][j] = '#';
    return true;
  }
  maze[i][j] = '#';
  if(find_destination(maze,i + 1,j) || find_destination(maze,i- 1,j) || find_destination(maze,i,j + 1) || find_destination(maze,i,j - 1)){
    return true;
  }else{
    maze[i][j] = '0';
    return false;
  }
}
int main(){
  string input;
  vector<vector<char> > maze;
  while(getline(cin,input)){
    vector<char> tmp;
    for(int i = 0 ; i < input.size() ; i++)
      if(input[i] != ' ')
	tmp.push_back(input[i]);
    maze.push_back(tmp);
  }
  find_destination(maze,1,1);
  for(int i = 0 ; i < maze.size() ; i++){
    for(int j = 0 ; j < maze[i].size() ; j++){
      cout << maze[i][j];
      if(j != maze[i].size() - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}
