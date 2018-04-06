/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cctype>

int main(){
  string input;
  while(getline(cin,input)){
    bool int_check = false , char_check = false , double_check = false;
    for(int i = 0 ; i < input.size() ; i++){
      if(isdigit(input[i]))
	int_check = true;
      else if(input[i] == '.'){
	if(int_check)
	  double_check = true;
	else
	  char_check = true;
      }else{
	char_check = true;
      }
    }
    if(char_check && input.size() > 1)
      cout << "string" << endl;
    else if(char_check)
      cout << "char" << endl;
    else if(double_check)
      cout << "float" << endl;
    else if(int_check)
      cout << "int" << endl;
  }
  return 0;
}

