/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<char> > seats(10,vector<char>(10,'#'));
  for(int i = 0 ; i < 8 ; i ++){
    for(int j = 0 ; j < 8 ; j++){
      cin >> seats[i + 1][j + 1];
    }
  }
  for(int i = 0 ; i < 8 ; i++){
    for(int j = 0 ; j < 8 ; j++){
      if(seats[i + 1][j + 1] == seats[i][j] || seats[i + 1][j + 1] == seats[i][j + 1] || seats[i + 1][j + 1] == seats[i][j + 2] ||
	 seats[i + 1][j + 1] == seats[i + 1][j] || seats[i + 1][j + 1] == seats[i + 1][j + 2] || seats[i + 1][j + 1] == seats[i + 2][j] ||
	 seats[i + 1][j + 1] == seats[i + 2][j + 1] || seats[i + 1][j + 1] == seats[i + 2][j + 2])
	cout << "(" << i << "," << j << ")" << endl;
    }
  }
  return 0;
}

