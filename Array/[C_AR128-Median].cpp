/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<vector<unsigned long long int> > trangle(66);
  for(int i = 0 ; i <= 65 ; i ++)
    for(int j = 0 ; j <= i; j++)
      if(i == j || j == 0)
	trangle[i].push_back(1);
      else
	trangle[i].push_back(trangle[i - 1][j - 1] + trangle[i - 1][j]);
  int n;
  cin >> n;
  while(n -- > 0){
    int a,b;
    cin >> a >> b;
    cout << trangle[a][b] << endl;
  }
  return 0;
}
