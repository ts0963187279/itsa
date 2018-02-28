using namespace std;
#include <iostream>
#include <vector>
#include <math.h>
bool isPrime(int);
int main(){
  string num;
  vector<char> nums;
  int maxPrime = 0;
  cin >> num;
  for(int i = num.size() - 1 ; i >= 0 ; i--){
    nums.push_back(num[i]);
  }
  for(int i = 0 ; i < nums.size() ; i++){
    int count = 0;
    int tmp = 0;
    for(int j = i ; j < nums.size() ; j ++){
      tmp = tmp + (int(nums[j]) - int('0')) * pow(10,count);
      count ++;
      if(isPrime(tmp)){
	if(tmp > maxPrime)
	  maxPrime = tmp;
      }
    }
  }
  if(maxPrime == 0)
    cout << "No prime found" <<endl;
  else
    cout << maxPrime << endl;
}
bool isPrime(int num){
  for(int i=2;i<num;i++){
    if(num % i == 0)
      return false;
  }
  return true;
}
