/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
void explore_maze(vector<vector<char> > &, int, int);
int main(){
  int n;
  cin >> n;
  vector<vector<char> > maze(n,vector<char>(n));
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < n ; j++)
      cin >> maze[i][j];
  explore_maze(maze, 1, 1);
  return 0;
}
void explore_maze(vector<vector<char> > &maze, int x, int y){
  int dx[] = {1,-1,0,0},dy[] = {0,0,-1,1};
  maze[x][y] = '*';
  if(x == maze.size() - 2 && y == maze.size() - 2){
    maze[x][y] = '#';
    for(int i = 0 ; i < maze.size() ; i ++){
      for(int j = 0 ; j < maze.size() ; j++){
	cout << maze[i][j];
	if(j != maze.size() - 1)
	  cout << " ";
      }
      cout << endl;
    }
  }
  for(int i = 0 ; i < 4 ; i++){
    int next_x = x + dx[i] , next_y = y + dy[i];
    if(maze[next_x][next_y] == '0'){
      maze[x][y] = '#';
      explore_maze(maze,next_x,next_y);
      maze[x][y] = '*';
    }
  }
}
