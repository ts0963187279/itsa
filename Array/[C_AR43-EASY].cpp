/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <cctype>

int main(){
  string input;
  while(getline(cin,input)){
    int i = 0,n,m;
    while(isdigit(input[i])){
      int tmp = int(input[i]) - int('0');
      i++;
      while(isdigit(input[i])){
	tmp *= 10;
	tmp += int(input[i]) - int('0');
	i++;
      }
      n = tmp;
    }
    i++;
    while(isdigit(input[i])){
      int tmp = int(input[i]) - int('0');
      i++;
      while(isdigit(input[i])){
	tmp *= 10;
	tmp += int(input[i]) - int('0');
	i++;
      }
      m = tmp;
    }
    int ans = 1;
    for(int i = 0 ; i < m ; i++){
      ans *= n;
    }
    cout << ans << endl;
  }
  return 0;
}
