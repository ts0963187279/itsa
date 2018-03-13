/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cmath>
int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    string input,target;
    cin >> input >> target;
    int times = 0;
    for(int i = 0 ; i < input.size() ; i ++){
      if((abs(int(input[i]) - int(target[i])) / 5) == 1)
	times += 5 - abs(int(input[i]) - int(target[i])) % 5;
      else
	times += abs(int(input[i]) - int(target[i]));
    }
    cout << times << endl;
  }
  return 0;
}

