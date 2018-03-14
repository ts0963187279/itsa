/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    int input,i;
    cin >> input;
    if(input < 0){
      vector<int> ans(8,1);
      input *= -1;
      for(i = 0 ; input >= 1 ; input /= 2 , i++){
	if(input % 2 == 0)
	  ans[i] = 1;
	else
	  ans[i] = 0;
      }
      for(i = 0 ; ans[i] != 0 ; i++)
      	ans[i] = 0;
      ans[i] = 1;
      for(i = ans.size() - 1 ; i >= 0 ; i --)
	cout << ans[i];
      cout << endl;
    }else{
      vector<int> ans(8,0);
      for(i = 0 ; input >= 1 ; input /= 2 , i++)
	ans[i] = input%2;
      for(i = ans.size() - 1 ; i >= 0 ; i --)
	cout << ans[i];
      cout << endl;
    }
  }
  return 0;
}
