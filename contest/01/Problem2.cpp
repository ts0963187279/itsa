/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
void rotate(int &dx , int &dy , int &rx , int &ry){
  int tmp = dx;
  dx = dy * ry;
  dy = tmp * rx;
}
int main(){
  int size , mod , dx = 1, dy = 0, rx = 1, ry = -1;
  char tmp;
  cin >> size >> tmp >> mod;
  if(mod == 1){
    dx = 0;
    dy = 1;
    rx = -1;
    ry = 1;
  }
  vector<vector<int> > matrix(size,vector<int>(size,0));
  int x = 0, y = 0;
  for(int i = 1 ; i <= size * size ; i++){
    matrix[x][y] = i;
    if(x + dx >= size || y + dy >= size || x + dx < 0 || y + dy < 0 || matrix[x + dx][y + dy] != 0)
      rotate(dx,dy,rx,ry);
    x += dx;
    y += dy;
  }
  for(int i = 0 ; i < size ; i ++){
    for(int j = 0 ; j < size ; j++){
      printf("%03d",matrix[i][j]);
      if(j != size - 1)
	cout << ",";
    }
    cout << endl;
  }
  return 0;
}

