/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cctype>

int main(){
  string input;
  while(getline(cin,input)){
    int ans = 0;
    for(int i = 0 ; i < input.size() ; i++){
      if(isalpha(input[i])){
	ans += int(input[i]) - int('A') + 1;
	i ++;
	while(isalpha(input[i])){
	  ans *= 26;
	  ans += int(input[i]) - int('A') + 1;
	  i ++;
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}

