/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  string ans,guess;
  cin >> ans;
  while(true){
    cin >> guess ;
    if(guess.compare("0000") == 0){
      break;
    }
    int a = 0 ,b = 0;
    for(int i = 0 ; i < 4 ; i++){
      for(int j = 0 ; j < 4 ; j++){
	if(guess[j] == ans[i]){
	  if(j == i){
	    a ++;
	  }else
	    b++;
	}
      }
    }
    cout << a << "A" << b << "B" << endl;
  }
  return 0;
}
