/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n;
  cin >> n;
  vector<int> scope;
  while(n -- > 0){
    int m;
    cin >> m;
    scope.push_back(m);
  }
  sort(scope.begin(),scope.end());
  for(int i = 0 ; i < scope.size() ; i++)
    cout << scope[i] << endl;
  return 0;
}
