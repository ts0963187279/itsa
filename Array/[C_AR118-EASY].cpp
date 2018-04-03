/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int main(){
  vector<int> A(10),B(10);
  map<int,int> sum;
  for(int i = 0 ; i < 10 ; i++)
    cin >> A[i];
  for(int i = 0 ; i < 10 ; i++)
    cin >> B[i];
  for(int i = 0 ; i < 10 ; i++)
    for(int j = 0 ; j < 10 ; j++)
      sum[A[i] + B[j]] = 1;
  int counter = 0;
  for(map<int,int>::iterator it = sum.begin() ; it != sum.end() ; it++){
    if(counter % 10 == 0 && counter != 0)
      cout << endl;
    else if(counter != 0)
      cout << " ";
    cout << it->first;
    counter ++;
  }
  cout << endl;
  return 0;
}

