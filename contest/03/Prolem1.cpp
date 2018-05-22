/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#include <cctype>
int main(){
  int n;
  scanf("%d",&n);
  while(n--){
    unsigned long long int x ,y;
    scanf("%lld %lld",&x ,&y);
    unsigned long long int sum = 0;
    for(unsigned long long int i = x ; i <= y ;i++){
      sum += i*i;
    }
    printf("%lld\n",sum);
  }
  return 0;
}

