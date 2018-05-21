/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cctype>
int main(){
  char *c = (char *)malloc(1024 * sizeof(char));
  int *p = (int *)malloc(2 * sizeof(int));
  int *x = p;
  gets(c);
  for(char *t = c ; *t != '\0' ; t++){
    int n = 1;
    if(*t == '-'){
      n = -1;
      t++;
    }
    if(isdigit(*t)){
      int tmp = *t - '0';
      t++;
      while(isdigit(*t)){
	tmp *= 10;
	tmp += *t - '0';
	t++;
      }
      *x = tmp;
      x++;
    }
  }
  if(p[0] * p[0] + p[1] * p[1] < 10000)
    printf("inside\n");
  else
    printf("outside\n");
  free(c);
  c = NULL;
  return 0;
}

