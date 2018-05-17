/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  string input;
  while(cin >> input){
    vector<int> DP(input.size(), 0);
    vector<int> trace(input.size() , 0);
    int max = 0 , pos = 0;
    for(unsigned int i = 0 ; i < input.size() ; i++){
      for(int j = i; j >= 0 ; j--){
	if(input[i] <= input[j] && DP[i] < DP[j] + 1){
	  DP[i] = DP[j] + 1;
	  trace[i] = i - j;
	}
	if(DP[i] >= max){
	  max = DP[i];
	  pos = i;
	}
      }
    }
    vector<char> ans(max);
    for(int i = 0 ; i < max ; i ++){
      ans[i] = input[pos];
      pos -= trace[pos];
    }
    for(int i = max - 1 ; i >= 0 ; i--)
      cout << ans[i] ;
    cout << endl;
  }
  return 0;
}

