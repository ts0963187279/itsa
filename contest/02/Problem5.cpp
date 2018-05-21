/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
int main(){
  int n;
  while(scanf("%d",&n) && n != 0){
    int t = 0 , a = 0;
    for(int i = 0 ; i < n ; i++){
      t++;
      a++;
      if(a == 6){
	a = 1;
	t++;
      }
    }
    printf("%d %d\n",t , a);
  }
  return 0;
}

