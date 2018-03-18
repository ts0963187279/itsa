/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m;
    cin >> m;
    vector<int> report(m);
    for(int i = 0 ; i < m ; i++)
      cin >> report[i];
    int max = 0,tmp = 0;
    for(int i = 0 ; i < m ; i++){
      tmp += report[i];
      if(tmp < 0)
	tmp = 0;
      if(tmp > max)
	max = tmp;
    }
    cout << max << endl;
  }
  return 0;
}

