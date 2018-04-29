/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    string input;
    cin >> input;
    sort(input.begin() , input.end()) ;
    do{
      cout << input << endl;
    }while(next_permutation(input.begin() , input.end()));
  }
  return 0;
}
