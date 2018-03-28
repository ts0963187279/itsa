/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n -- > 0) {
    vector<int> list;
    list.push_back(0); list.push_back(0); list.push_back(0); list.push_back(1);
    int m;
    cin >> m;
    for(int i = 4 ; i <= m ; i++){
      list.push_back(list[i - 1] + list[i - 3]);
    }
    cout << list[m] << endl;
  }
  return 0;
}

