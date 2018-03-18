/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cctype>

int main(){
  string input;
  int shift;
  getline(cin,input);
  cin >> shift;
  for(int i = 0 ; i < input.size() ; i++){
    if(isalpha(input[i])){
      if(isupper(input[i]))
	input[i] = char((int(input[i]) - int('A') + shift) % 26 + int('A'));
      else
	input[i] = char((int(input[i]) - int('a') + shift) % 26 + int('a'));
    }else if(isdigit(input[i]))
      input[i] = char((int(input[i]) - int('0') + shift) % 10 + int('0'));
    cout << input[i];
  }
  cout << endl;
  return 0;
}

