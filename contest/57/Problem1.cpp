/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
int main(){
  string keyboard = "~!@#$%^&*()_++`1234567890-==qwertyuiop[]\\\\asdfghjkl;''zxcvbnm,.//<>??{}||  ";
  int n;
  cin >> n;
  getchar();
  while(n-- >0){
    string input;
    getline(cin,input);
    transform(input.begin(),input.end(),input.begin(),::tolower);
    for(int i = 0 ; i < input.size() ; i ++){
      for(int j = 0 ; j < keyboard.size() ; j++){
	if(input[i] == ':' || input[i] == '\"'){
	  cout << '\"';
	  break;
	}else if(input[i] == keyboard[j]){
	  cout << keyboard[j+1];
	  break;
	}
      }
    }
    cout << endl;
  }
  return 0;
}

