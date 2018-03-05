/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int m;
  cin >> m;
  while(m-- >0){
    int a,b;
    bool error = true;
    cin >> a >> b;
    for(int i = a + 1 ; i < b ; i++){
      if(i < 10){
	error = false;
	cout << i;
	if(i < b-1)
	  cout << " ";
      }else if(i < 100){
	if(i%10 == i/10){
	  error = false;
	  cout << i;
	  if(i < b-1)
	    cout << " ";
	}
      }else{
	if(i%10 == i/100){
	  error = false;
	  cout << i;
	  if(i < b-1)
	    cout << " ";
	}
      }
    }
    if(error)
      cout << "0";
    cout << endl;
  }
  return 0;
}

