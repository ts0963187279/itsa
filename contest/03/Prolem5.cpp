/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#include <cstdlib>
#define N 15 + 5
unsigned long long int DP[N][N];
int main(){
  int n;
  for(int i = 0 ; i < N ; i++)
    DP[0][i] = 1;
  for(int i = 1 ; i < N ; i++){
    for(int j = i ; j < N ; j++){
      DP[i][j] = (unsigned long long int)(DP[i - 1][j] + DP[i - 1][j - 1]);
      if(i != j)
	DP[i][j] += DP[i][j - 1];
    }
  }
  scanf("%d",&n);
  while(n--){
     int m;
     scanf("%d",&m);
     printf("%lld\n",DP[m][m]);
  }
  return 0;
}

