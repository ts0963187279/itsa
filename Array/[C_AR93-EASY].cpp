/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  if(n == 0){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,0) (1,3)\n(2,0) (2,3)\n(3,0) (3,3)\n(4,0) (4,1) (4,2) (4,3)" << endl;
  }
  if(n == 1){
    cout << "(0,3)\n(1,3)\n(2,3)\n(3,3)\n(4,3)" << endl;
  }
  if(n == 2){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,3)\n(2,0) (2,1) (2,2) (2,3)\n(3,0)\n(4,0) (4,1) (4,2) (4,3)" << endl;
  }
  if(n == 3){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,3)\n(2,0) (2,1) (2,2) (2,3)\n(3,3)\n(4,0) (4,1) (4,2) (4,3)" << endl;
  }
  if(n == 4){
    cout << "(0,0) (0,3)\n(1,0) (1,3)\n(2,0) (2,1) (2,2) (2,3)\n(3,3)\n(4,3)" << endl;
  }
  if(n == 5){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,0)\n(2,0) (2,1) (2,2) (2,3)\n(3,3)\n(4,0) (4,1) (4,2) (4,3)" << endl;
  }
  if(n == 6){
    cout << "(0,0)\n(1,0)\n(2,0) (2,1) (2,2) (2,3)\n(3,0) (3,3)\n(4,0) (4,1) (4,2) (4,3)" << endl;
  }
  if(n == 7){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,3)\n(2,3)\n(3,3)\n(4,3)" << endl;
  }
  if(n == 8){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,0) (1,3)\n(2,0) (2,1) (2,2) (2,3)\n(3,0) (3,3)\n(4,0) (4,1) (4,2) (4,3)" << endl;
  }
  if(n == 9){
    cout << "(0,0) (0,1) (0,2) (0,3)\n(1,0) (1,3)\n(2,0) (2,1) (2,2) (2,3)\n(3,3)\n(4,3)" << endl;
  }
  return 0;
}
