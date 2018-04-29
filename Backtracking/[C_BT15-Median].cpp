/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
int find_place(vector<vector<int> > &game , int n , int N , int x, int y , map<vector<vector<int> > , int> &table);
int main(){
  int n;
  while(cin >> n){
    map<vector<vector<int> > , int> table;
    vector<vector<int> > game(n,vector<int>(n,0));
    int x,y;
    cin >> x >> y;
    int vaild = find_place(game,0,n,x,y,table);
    if(vaild > 0)
      cout << "YES(" << vaild << ")" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
int find_place(vector<vector<int> > &game , int n , int N ,int x, int y,map<vector<vector<int> > , int> &table){
  vector<int> dx = {0,-1,0,1,1,1,-1,-1}, dy = {-1,0,1,0,1,-1,1,-1};
  game[x][y] ++;
  for(int i = 0 ; i < 8 ; i++){
    int tmp_x = x, tmp_y = y;
    while(tmp_x + dx[i] >= 0 && tmp_x + dx[i] < game.size() && tmp_y + dy[i] >= 0 && tmp_y + dy[i] < game.size()){
      tmp_x += dx[i];
      tmp_y += dy[i];
      game[tmp_x][tmp_y]++;
    }
  }
  int sum = 0;
  if(n == N - 1 && table.find(game) == table.end()){
    table[game] = 1;
    sum ++;
  }
  for(int i = 0 ; i < N ; i ++){
    for(int j = 0 ; j < N ; j ++){
      if(game[i][j] == 0){
	sum += find_place(game,n + 1,N,i,j,table);
      }
    }
  }
  game[x][y] --;
  for(int i = 0 ; i < 8 ; i++){
    int tmp_x = x, tmp_y = y;
    while(tmp_x + dx[i] >= 0 && tmp_x + dx[i] < game.size() && tmp_y + dy[i] >= 0 && tmp_y + dy[i] < game.size()){
      tmp_x += dx[i];
      tmp_y += dy[i];
      game[tmp_x][tmp_y]--;
    }
  }
  return sum;
}
