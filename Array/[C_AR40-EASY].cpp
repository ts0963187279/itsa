/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int size,n;
  char trash;
  cin >> size >> trash >> n;
  int faced = 1,mod = 1,positionX = 0,positionY = 0,counter = 1,turns = 0,nums = 1;
  if(n == 2){
    faced = 2;
    mod = -1;
  }
  vector<vector<int> > map(size,vector<int>(size));
  while(true){
    switch(faced){
    case 0 :
      for(;positionY >= 0 + turns ; positionY--)
	map[positionY][positionX] = nums++;
      break;
    case 1 :
      for(;positionX < size - turns ; positionX++)
	map[positionY][positionX] = nums++;
      break;      
    case 2 :
      for(;positionY < size - turns ; positionY++)
	map[positionY][positionX] = nums++;
      break;      
    case 3 :
      for(;positionX >= 0 + turns ; positionX--)
	map[positionY][positionX] = nums++;
      break;
    }
    counter ++ ;
    faced += mod;
    if(faced == -1)
      faced = 3;
    if(faced == 4)
      faced = 0;
    if(n == 1)
      switch(faced){
      case 0 :
	positionX++;
	positionY--;
	break;
      case 1 :
	positionX++;
	positionY++;
	break;      
      case 2 :
	positionX--;
	positionY++;
	break;      
      case 3 :
	positionY--;
	positionX--;
	break;      
      }
    else
      switch(faced){
      case 0 :
	positionX--;
	positionY--;
	break;
      case 1 :
	positionX++;
	positionY--;
	break;      
      case 2 :
	positionX++;
	positionY++;
	break;      
      case 3 :
	positionY++;
	positionX--;
	break;      
      }
    if(counter % 4 == 0)
      turns ++;
    if(nums == size * size + 1)
      break;
  }
  for(int i = 0 ; i < size ; i++){
    for(int j = 0 ; j < size ; j++){
      printf("%03d",map[i][j]);
      if(j != size - 1)
	printf(",");
    }
    printf("\n");
  }
  return 0;
}
