/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#define N 10000+5
#define M 200000+5
int main(){
  int t,n,m;
  int *a = new int[N];
  int *b = new int[M];
  char *c = new char[M*10];
  int *dp = new int[M]();
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    getchar();
    gets(c);
    int tmp , i = 0;
    while(sscanf(c,"%d %[^\n]",&tmp,c)==2)a[i++]=tmp;
    a[i]=tmp;
    gets(c);
    i = 0;
    int max = 0;
    while(sscanf(c,"%d %[^\n]",&tmp,c)==2){
      b[i++]=tmp;
      if(tmp > max)
	max = tmp;
    }
    b[i]=tmp;
    if(tmp > max)
      max = tmp;
    int ans = 0;
    for(int j = 0 ; j <= max ; j++)
      dp[j] = 0;
    for(int j = 0 ; j < n ; j++)
      for(int k = max ; k >= a[j] ; k--)
	if(dp[k] < dp[k - a[j]] + a[j])
	  dp[k] = dp[k - a[j]] + a[j];
    for(int j = 0 ; j < m ; j++)
      if(dp[b[j]] == b[j])
	ans ++;
    printf("%d\n",ans);
  }
  delete a;
  delete dp;
  delete b;
  delete c;
  return 0;
}

