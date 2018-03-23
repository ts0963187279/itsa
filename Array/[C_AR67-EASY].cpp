/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<int> input(6);
  for(int i = 0 ; i < 6 ; i++){
    cin >> input[i];
  }
  for(int i = 0 ; i < 6 ; i++){
    for(int j = 0 ; j < 6 ; j++){
      printf("%03d",input[i] * input[j]);
      j != 5 ? printf(" ") : printf("");
    }
    printf("\n");
  }
  return 0;
}
