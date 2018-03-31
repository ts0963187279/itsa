/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  vector<int> weight(12);
  weight[0] = 1; weight[1] = 3; weight[2] = 5; weight[3] = 2;
  weight[4] = 4; weight[5] = 6; weight[6] = 1; weight[7] = 3;
  weight[8] = 5; weight[9] = 2; weight[10] = 4; weight[11] = 6;
  cin >> n;
  while( n -- > 0){
    string input;
    int sum = 0;
    cin >> input;
    for(int i = 0 ; i < input.size() - 1 ; i++){
      sum += (int(input[i]) - int('0')) * weight[i];
    }
    if(10 - (sum % 10) == int(input[input.size() - 1]) - int('0'))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
  return 0;
}

