/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#include <cctype>
int main(){
  char *input = (char *)malloc(1024 * sizeof(char));
  int ans = 0 , max = 0;
  gets(input);
  for(char *c = input ; *c != '\0' ; c++){
    int negative = 1;
    if(*c == '-'){
      negative = -1;
      c++;
    }
    if(isdigit(*c)){
      int tmp = *c - '0';
      c++;
      while(isdigit(*c)){
	tmp *= 10;
	tmp += *c - '0';
	c++;
      }
      tmp *= negative;
      ans += tmp;
      if(ans > max)
	max = ans;
      if(ans < 0)
	ans = 0;
    }
  }
  printf("%d\n", max);
  free(input);
  input = NULL;
  return 0;
}

