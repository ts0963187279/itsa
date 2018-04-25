/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
typedef struct{
  int x,y,step;
}Point;
void explore_maze(vector<vector<char> > &, Point, Point &, int &);
int main(){
  int n;
  cin >> n;
  Point start,boss;
  vector<vector<char> > maze(n,vector<char>(n));
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < n ; j++){
      cin >> maze[i][j];
      if(maze[i][j] == 'S'){
	start.x = i;
	start.y = j;
      }
    }
  boss.step = -1;
  vector<vector<char> > solution(maze.begin(), maze.end());
  int step = -1;
  explore_maze(maze, start, boss , step);
  solution[boss.x][boss.y] = '#';
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      cout << solution[i][j];
    }
    cout << endl;
  }
  return 0;
}
void explore_maze(vector<vector<char> > &maze, Point current, Point &boss, int &step){
  int dx[] = {0, 0, 1, -1}, dy[] = {-1, 1, 0, 0};
  step ++;
  if(step > boss.step){
    boss.x = current.x;
    boss.y = current.y;
    boss.step = step;
  }
  for(int i = 0 ; i < 4 ; i++){
    Point next;
    next.x = current.x + dx[i];
    next.y = current.y + dy[i];
    if(next.x >= 0 && next.x < maze.size() && next.y >= 0 && next.y < maze.size() && maze[next.x][next.y] == '1'){
      maze[current.x][current.y] = 'S';
      explore_maze(maze, next, boss, step);
      maze[current.x][current.y] = '1';
    }
  }
  return ;
}

