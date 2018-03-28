/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    vector<int> list(100);
    for(int i = 0 ; i < 100 ; i++)
      list[i] = i;
    int m;
    cin >> m;
    int current = 0;
    for(int i = 0 ; i < 100 ; i++){
      list.erase(list.begin() + (current + m - 1) % (100 - i));
      current = (current + m - 1) % (100 - i);
    }
    cout << list[0] << endl;
  }
  return 0;
}

