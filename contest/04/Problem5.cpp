/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#define N 70 + 5
int main(){
  int *p = new int[N] , n;
  p[0] = 1; p[1] = 1; p[2] = 1;
  for(int i = 3 ; i < N ; i++)
    p[i] = p[i - 2] + p[i - 3];
  scanf("%d",&n);
  printf("%d\n",p[n]);
  delete p;
  return 0;
}

