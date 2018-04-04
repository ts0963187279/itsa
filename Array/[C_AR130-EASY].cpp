/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  cin.ignore();
  while(n -- > 0){
    int m,num,sum = 0,max = 0;
    cin >> m;
    for(int i = 0 ; i < m ; i++){
      cin >> num;
      sum += num;
      sum = (sum < 0) ? 0 : sum;
      max = (sum > max) ? sum : max;
    }
    cout << max << endl;
  }
  return 0;
}
