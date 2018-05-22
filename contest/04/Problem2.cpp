/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 5000 + 5
struct line{
  unsigned long long int s,n;
};
bool c(const line &a ,const line &b){  return a.s < b.s || (a.s == b.s && a.n < b.n);}
int main(){
  int n , m;
  line *p = new line[N];
  scanf("%d",&n);
  while(n --){
    scanf("%d",&m);
    for(int i = 0 ; i < m ; i ++)
      scanf("%lld %lld",&p[i].s,&p[i].n);
    sort(p,p + m,c);
    unsigned long long int start = p[0].s , sum = 0;
    for(int i = 0 ; i < m ; i++){
      if(p[i].s <= start && p[i].n > start){
	sum += p[i].n - start;
	start = p[i].n;
      }else if(p[i].s > start){
	sum += p[i].n - p[i].s;
	start = p[i].n;
      }
    }
    printf("%lld\n",sum);
  }
  delete p;
  return 0;
}
