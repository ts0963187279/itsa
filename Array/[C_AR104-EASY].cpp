/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

void swap_two_integer(int &a, int &b);
int main(){
  int n;
  cin >> n;
  vector<int> sums(n),nums(n);
  for(int i = 0 ; i < n ; i++){
    int num , sum = 0;
    cin >> num;
    nums[i] = num;
    while(num > 0){
      sum += num % 10;
      num /= 10;
    }
    sums[i] = sum;
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n - i - 1; j ++){
      if(sums[j] > sums[j + 1]){
	swap_two_integer(sums[j],sums[j + 1]);
	swap_two_integer(nums[j],nums[j + 1]);
      }
    }
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n - i - 1 ; j++){
      if(sums[j] == sums[j + 1] && nums[j] > nums[j + 1]){
	swap_two_integer(sums[j],sums[j + 1]);
	swap_two_integer(nums[j],nums[j + 1]);
      }
    }
  }
  for(int i = 0 ; i < n ; i ++){
    cout << nums[i] ;
    if(i != n - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}
void swap_two_integer(int &a , int &b){
  int tmp = a;
  a = b;
  b = tmp;
}
