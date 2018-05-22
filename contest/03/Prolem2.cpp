/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#include <map>
struct P{
  int a,b;
  P():a(0),b(0){}
  P(int x,int y):a(x),b(y){}
};
bool operator < (const P &lp , const P &rp){
  return lp.a < rp.a || (lp.a == rp.a && lp.b < rp.b);
}
int main(){
  int a,b;
  while(scanf("%d %d",&a,&b) && a!=0 && b!=0){
    int *n = (int *)malloc(1024*sizeof(int));
    int num;
    map<P,int> table;
    int pos = 0 , re = 0;
    
    while(a != 0){
      if(a < b)
	a *= 10;
      num = a/b;
      a%=b;
      P p(num,a);
      if(table.find(p) == table.end()){
	*(n+pos)=num;
	table[p] = pos;
	pos++;
      }else{
	re = pos - table[p];
	break;
      }
    }
    printf("0.");
    for(int i = 0 ; i < pos ; i++)
      printf("%d",*(n+i));
    printf("\n%d\n",re);
  }
  return 0;
}

