/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int> > breads(N,vector<int>(N));
  for(int i = 0 ; i < N ; i++)
    for(int j = 0 ; j < N ; j++)
      cin >> breads[i][j];
  while(M -- > 0){
    int startX,startY,endX,endY,sum = 0;
    cin >> startX >> startY >> endX >> endY;
    for(int i = startX - 1 ; i < endX ; i++){
      for(int j = startY - 1 ; j < endY ; j++){
	sum += breads[i][j];
      }
    }
    cout << sum << endl;
  }
  return 0;
}
