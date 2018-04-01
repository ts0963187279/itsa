/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  unsigned long long int N;
  vector<string> keyboard(4);
  keyboard[0] = "!@#$%^&*()";
  keyboard[1] = "QWERTYUIOP";
  keyboard[2] = "ASDFGHJKL;";
  keyboard[3] = "ZXCVBNM,./";
  cin >> N;
  while(N -- > 0){
    char input;
    int direction,positionX,positionY;
    cin >> input >> direction;
    for(int i = 0 ; i < 4 ; i++)
      for(int j = 0 ; j < 10 ; j++)
	if(keyboard[i][j] == input){
	  positionX = i;
	  positionY = j;
	}
    switch(direction){
    case 1 :
      --positionX < 0 ? positionX = 3 : positionX = positionX;
      cout << keyboard[positionX][positionY] << endl;
      break;
    case 2 :
      cout << keyboard[(positionX + 1) % 4][positionY] << endl;
      break;
    case 3 :
      cout << keyboard[positionX][(positionY + 1) % 10] << endl;
      break;
    case 4 :
      --positionY < 0 ? positionY = 9 : positionY = positionY;
      cout << keyboard[positionX][positionY] << endl;
      break;
    }
  }
  return 0;
}

