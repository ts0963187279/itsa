/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  string input;
  bool error = false;
  getline(cin,input);
  for(int i = 0 ; i < input.size()/2 ; i++){
    if(input[i] != input[input.size() - i - 1]){
      error = true;
    }
  }
  if(error)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}
