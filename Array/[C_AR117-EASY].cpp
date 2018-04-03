/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n,counter = 0;
  cin >> n;
  vector<int> mountains(n + 2);
  mountains[0] = 1e9;
  mountains[n + 1] = 1e9;
  for(int i = 0 ; i < n ; i++)
    cin >> mountains[i + 1];
  for(int i = 0 ; i < n ; i++)
    if(mountains[i + 1] > mountains[i] && mountains[i + 1] > mountains[i + 2])
      counter ++;
  cout << counter << endl;
  for(int i = 0 ; i < n ; i++){
    cout << mountains[i + 1];
    if(mountains[i + 1] > mountains[i] && mountains[i + 1] > mountains[i + 2])
      cout << ">>>>>";
    cout << endl;
  }
  return 0;
}

