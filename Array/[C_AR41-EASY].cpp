/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <cctype>

int main(){
  string input;
  while(getline(cin,input)){
    vector<int> nums;
    double sum = 0;
    int negative = 1;
    for(int i = 0 ; i < input.size() ; i++){
      if(input[i] == '-')
	negative = -1;
      if(isdigit(input[i])){
	int tmp = int(input[i]) - int('0');
	i++;
	while(isdigit(input[i])){
	  tmp *= 10;
	  tmp += int(input[i]) - int('0');
	  i++;
	}
	tmp *= negative;
	sum += tmp;
	nums.push_back(tmp);
	negative = 1;
      }
    }
    printf("Size: %d\n",nums.size());
    printf("Average: %.3lf\n",sum / nums.size());
  }
  return 0;
}
