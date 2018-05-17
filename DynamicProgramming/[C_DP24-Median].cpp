/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  vector<int> coins(5);
  coins[0] = 1;  coins[1] = 5;  coins[2] = 10;  coins[3] = 25;  coins[4] = 50;
  int n;
  cin >> n;
  while(n -- > 0){
    int m;
    cin >> m;
    vector<unsigned long long int> DP(m + 1,1);
    for(int i = 1 ; i < 5 ; i++)
      for(int j = coins[i] ; j <= m ; j++)
	DP[j] += DP[j - coins[i]];
    cout << DP[m] << endl;
  }
  return 0;
}

