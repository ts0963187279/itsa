/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int size,n,positionX = 0 , positionY = 0 , directX = 1, directY = 0 , turnX = 1, turnY = -1,counter = 1;
  char trash;
  cin >> size >> trash >> n ;
  vector<vector<int> > map(size,vector<int>(size,0));
  if(n == 2){
    directX = 0;
    directY = 1;
    turnX = -1;
    turnY = 1;
  }
  while(counter <= size * size){
    map[positionY][positionX] = counter++;
    int nextX = positionX + directX , nextY = positionY + directY;
    if(nextX >= size || nextY >= size || nextX < 0 || nextY < 0 || map[nextY][nextX] != 0){
      int tmp = directX;
      directX = directY * turnY;
      directY = tmp * turnX;
    }
    positionX += directX;
    positionY += directY;
  }
  for(int i = 0 ; i < size ; i ++){
    for(int j = 0 ; j < size ; j++){
      printf("%03d",map[i][j]);
      if(j != size - 1)
	cout << ",";
    }
    cout << endl;
  }
  return 0;
}
