/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int N;
  cin >> N;
  vector<unsigned long long int> fibonacci(N + 1);
  fibonacci[0] = 1;
  fibonacci[1] = 1;
  fibonacci[2] = 1;
  for(int i = 3 ; i <= N ; i++)
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  cout << fibonacci[N] << endl;
  return 0;
}

