/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  string input;
  cin >> input;
  while(true){
    string guess;
    cin >> guess;
    if(!guess.compare("0000"))
      break;
    int a = 0 , b = 0;
    for(int i = 0 ; i < input.size() ; i++){
      for(int j = 0 ; j < input.size() ; j++){
	if(i == j && input[i] == guess[j])
	  a++;
	else if(input[i] == guess[j])
	  b++;
      }
    }
    cout << a << "A" << b << "B" << endl;
  }
  return 0;
}
