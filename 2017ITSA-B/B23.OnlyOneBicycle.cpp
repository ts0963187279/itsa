/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
  int m;
  cin >> m;
  while(m -- > 0){
    int n, tmp , sum = 0;
    cin >> n;
    vector<int> weight(n);
    for(int i = 0 ; i < n ; i++)
      cin >> tmp >> weight[i];
    sort(weight.begin() , weight.end());
    int i = n - 1;
    for(; i > 2 ; i-= 2){
      int a = weight[0] + weight[i] + weight[0] + weight[i - 1];
      int b = weight[1] + weight[0] + weight[i] +  weight[1];
      sum += a > b ? b : a ;
    }
    if(i == 2)
      sum += weight[1] + weight[0] + weight[2];
    else if(i == 1)
      sum += weight[1];
    else if(i == 0)
      sum += weight[0];
    cout << sum << endl;
  }
  return 0;
}
