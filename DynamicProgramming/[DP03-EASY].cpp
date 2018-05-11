/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n , overall;
  cin >> n;
  vector<int> weight(n) , value(n);
  for(int i = 0 ; i < n ; i++)
    cin >> weight[i] >> value[i];
  cin >> overall;
  vector<int> DP(overall + 1,0);
  DP[0] = 0;
  for(int i = 0 ; i < n ; i++){
    for(int j = overall ; j >= weight[i] ; j--){
      if(DP[j] < DP[j - weight[i]] + value[i])
	DP[j] = DP[j - weight[i]] + value[i];
    }
  }
  cout << DP[overall] << endl;
  return 0;
}

