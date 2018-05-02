/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int scope;
    cin >> scope;
    if(scope < 61)
      cout << "Careless" << endl;
    else if(scope < 85)
      cout << "Good" << endl;
    else if(scope < 95)
      cout << "Very Good" << endl;
    else
      cout << "Excellent" << endl;
  }
  return 0;
}

