/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  vector<int> B(n,999);
  vector<int> A(n,999);
  for(int i = 0 ; i < n ; i++)
    cin >> B[i];
  for(int i = 0 ; i < n ; i++){
    int counter = B[i];
    int j = 0;
    for(j = 0 ; counter != 0 ;j++){
      if(A[j] > i + 1)
	counter--;
    }
    for(;A[j] != 999;j++);
    A[j] = i + 1;
  }
  for(int i = 0 ; i < n ; i++){
    cout << A[i];
    if(i != n - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}
