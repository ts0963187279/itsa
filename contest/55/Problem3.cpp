/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int T;
  cin >> T ;
  while(T-- > 0){
    int N,S;
    cin >> N >> S;
    if(S == 1){
      for(int i = 0 ; i < N ; i ++){
	for(int j = 0 ; j < N ; j ++){
	  if(j == N - i - 1)
	    cout << "*";
	  else
	    cout << "x";
	  if(j != N - 1)
	    cout << " ";
	}
	cout << endl;
      }
    }
    if(S == 2){
      for(int i = 0 ; i < N ; i ++){
	for(int j = 0 ; j < N ; j ++){
	  if(j == i)
	    cout << "*";
	  else
	    cout << "x";
	  if(j != N - 1)
	    cout << " ";
	}
	cout << endl;
      }      
    }
    if(S == 3){
      for(int i = 0 ; i < N ; i ++){
	for(int j = 0 ; j < N ; j ++){
	  if(j == N - 1)
	    cout << "*";
	  else
	    cout << "x";
	  if(j != N - 1)
	    cout << " ";
	}
	cout << endl;
      }      
    }
    if(S == 4){
      for(int i = 0 ; i < N ; i ++){
	for(int j = 0 ; j < N ; j ++){
	  if(j == 0)
	    cout << "*";
	  else
	    cout << "x";
	  if(j != N - 1)
	    cout << " ";
	}
	cout << endl;
      }      
    }
  }
  return 0;
}

