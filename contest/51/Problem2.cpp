/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cctype>
int main(){
  string input;
  while(getline(cin,input)){
    unsigned long long int ans = 1;
    for(int i = 0 ; i < input.size() ; i++){
      int tmp;
      if(isdigit(input[i])){
	tmp = int(input[i++]) - int('0');
	while(isdigit(input[i])){
	  tmp *= 10;
	  tmp += int(input[i++]) - int('0');
	}
      }
      ans *= tmp;
    }
    cout << ans << endl;
  }
  return 0;
}
