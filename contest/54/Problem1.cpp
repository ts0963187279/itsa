/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    vector<float> input(10,0);
    for(int i = 0 ; i < 10 ; i++)
      cin >> input[i];
    sort(input.begin(),input.end());
    printf("maximum:%.2lf\n",input[9]);
    printf("minimum:%.2lf\n",input[0]);
  }
  return 0;
}

