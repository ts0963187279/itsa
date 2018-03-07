/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
int main(){
  string keyboard = "!@#$%^&*()_++1234567890-==qwertyuiop[]\\\\asdfghjkl;''zxcvbnm,.//:'\"''\"'<>??{}||  ";
  string input;
  getline(cin,input);
  transform(input.begin(),input.end(),input.begin(),::tolower);
  for(int i = 0 ; i < input.size() ; i++){
    for(int j = 0 ; j < keyboard.size() ; j++){
      if(input[i] == '\"' || input[i] == ':'){
	cout << '\"' ;
	break;
      }else if(keyboard[j] == input[i]){
	cout << keyboard[j+1];
	break;
      }
    }
  }
  cout << endl;
  return 0;
}
