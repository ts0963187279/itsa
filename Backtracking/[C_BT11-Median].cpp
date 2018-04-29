/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n,max = 0,price,value;
  cin >> n;
  vector<int> DP(101,0);
  DP[0] = 0;
  for(int i = 0 ; i < n ; i++){
    cin >> price >> value ;
    for(int j = 100 ; j >= price ; j--){
      if(DP[j - price] + value > DP[j]){
	DP[j] = DP[j - price] + value;
	if(DP[j] > max)
	  max = DP[j];
      }
    }
  }
  cout << max << endl;
  return 0;
}

