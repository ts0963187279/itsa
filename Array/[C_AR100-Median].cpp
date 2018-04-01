/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int T;
  cin >> T;
  while(T -- > 0){
    int n,s;
    cin >> n >> s;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < n ; j++){
	switch(s){
	case 1 :
	  if(n - i - 1 == j)
	    cout << "*";
	  else
	    cout << "x";
	  break;
	case 2 :
	  if(i == j)
	    cout << "*";
	  else
	    cout << "x";
	  break;
	case 3 :
	  if(j == n - 1)
	    cout << "*";
	  else
	    cout << "x";
	  break;
	case 4 :
	  if(j == 0)
	    cout << "*";
	  else
	    cout << "x";
	  break;
	}
	if(j != n - 1)
	  cout << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

