using namespace std;
#include <iostream>
int main(){
  int solution = 0;
  int input;
  for(int i = 0 ; i < 6 ; i ++){
    cin >> input;
    solution += input * input * input;
  }
  cout << solution << endl;
  return 0;
}

