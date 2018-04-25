/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <queue>
int jump(int,int,int,int,vector<vector<bool> > &,int,int);
int main(){
  int N,M,H,K;
  cin >> N >> M >> H >> K;
  vector<vector<bool> > path(N + 1,vector<bool>(M + 1,false));
  cout << jump(N,M,H,K,path,H,K) << endl;
  return 0;
}
int jump(int N,int M, int H, int K,vector<vector<bool> > &path,int x, int y){
  int dx[] = {-1,-1,1,1,-2,-2,2,2} ,dy[] = {-2,2,-2,2,-1,1,-1,1} ,sum = 0;
  for(int i = 0 ; i < 8 ; i++){
    int next_x = x + dx[i] , next_y = y + dy[i];
    if(next_x == H && next_y == K)
      sum ++;
    else if(next_x >= 0 && next_x <= N && next_y >= 0 && next_y <= M && !path[next_x][next_y]){
      path[x][y] = true;
      sum += jump(N,M,H,K,path,next_x,next_y);
      path[x][y] = false;
    }
  }
  return sum ;
}
