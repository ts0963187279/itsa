/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<int> fibonacci(30);
  fibonacci[0] = 1;
  fibonacci[1] = 1;
  fibonacci[2] = 2;
  int n;
  cin >> n;
  while(n -- > 0){
    int input;
    cin >> input;
    for(int i = 3 ; i < input ; i++){
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for(int i = 0 ; i < input ; i++){
      cout << fibonacci[i];
      if(i != input-1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

