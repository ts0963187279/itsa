/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<string> keyboard(4);
  keyboard[0] = "!@#$%^&*()";
  keyboard[1] = "QWERTYUIOP";
  keyboard[2] = "ASDFGHJKL;";
  keyboard[3] = "ZXCVBNM,./";
  unsigned long long int N;
  cin >> N ;
  while(N -- > 0){
    string input;
    char start;
    int initX,initY;
    vector<int> positionX,positionY;
    cin >> input >> start;
    for(int i = 0 ; i < input.size() ; i++){
      for(int j = 0 ; j < 4 ; j ++){
	for(int k = 0 ; k < 10 ; k++){
	  if(keyboard[j][k] == input[i]){
	    positionX.push_back(j);
	    positionY.push_back(k);
	  }
	}
      }
    }
    for(int i = 0 ; i < 4 ; i++){
      for(int j = 0 ; j < 10 ; j++){
	if(keyboard[i][j] == start){
	  initX = i;
	  initY = j;
	}
      }
    }
    for(int i = 1 ; i < input.size() ; i++){
      int x,y;
      initX + positionX[i] - positionX[0] < 0 ? x = 4 + (initX + positionX[i] - positionX[0]) % 4 : x = (initX + positionX[i] - positionX[0]) % 4;
      initY + positionY[i] - positionY[0] < 0 ? y = 10 + (initY + positionY[i] - positionY[0]) % 10 : y = (initY + positionY[i] - positionY[0]) % 10; 
      cout << keyboard[x][y];
    }
    cout << endl;
  }
  return 0;
}

