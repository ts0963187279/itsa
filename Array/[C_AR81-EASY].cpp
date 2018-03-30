/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  vector<int> list(9);
  int counter = 0;
  for(int i = 0 ; i < 3 ; i++){
    cin >> list[counter++];
    for(int j = 1 ; j < 3 ; j++){
      getchar();
      cin >> list[counter++];
    }
  }
  sort(list.begin(),list.end());
  cout << list[8] + list[7] + list[6] << endl;
  return 0;
}

