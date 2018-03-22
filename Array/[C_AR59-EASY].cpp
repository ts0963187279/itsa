/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    string input;
    int repeat = 0;
    cin >> input;
    if(input.size() != 4){
      cout << "Failure Input" << endl;
    }else{
      for(int i = 0 ; i < input.size() ; i++){
	for(int j = 1 ; j < input.size() - i ; j++)
	  if(input[i] == input[i + j])
	    repeat ++;
	if(repeat > 1)
	  break;
      }
      if(repeat == 1)
	cout << "Yes" << endl;
      else
	cout << "No" << endl;
    }
  }
  return 0;
}
