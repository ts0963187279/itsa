using namespace std;
#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>
#include <algorithm>
bool reverseOrder(int i,int j) {return (j<i);}
bool positive(int i,int j) {return (i<j);}
int main(){
  string line;
  string token;
  vector<int> nums;
  getline(cin,line);
  istringstream iStringStream(line);
  while(getline(iStringStream,token,',')){
    nums.push_back(stoi(token));
  }
  sort(nums.begin(),nums.end(),reverseOrder);
  int count = nums.size()-1;
  int big = 0;
  for(int i=0;i<nums.size();i++){
    big += nums[i] * pow(10,count--);
  }
  sort(nums.begin(),nums.end(),positive);
  count = nums.size()-1;
  int small = 0;
  for(int i=0;i<nums.size();i++)
    small += nums[i] * pow(10,count--);
  cout << big - small <<endl;
  return 0;
}
