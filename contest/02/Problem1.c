#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
  int n;
  scanf("%d",&n);
  while(n --){
    int m;
    scanf("%d",&m);
    int *px = malloc(m * 2 * sizeof(int));
    int *x = px;
    getchar();
    char *ch = malloc(1024 * sizeof(char));
    gets(ch);
    for(char *c = ch ; *c != '\0' ; c++){
      int negative = 0;
      if(*c == '-'){
	negative = 1;
	c++;
      }
      if(isdigit(*c)){
	*x = *c - '0';
	c++;
	while(isdigit(*c)){
	  *x *= 10;
	  *x += *c - '0';
	  c++;
	}
	if(negative)
	  *x *= -1;
	x++;
      }
    }
    int *len = px + 2 * m;
    int max = 0;
    for(int *i = px ; i < len ; i+= 2){
      for(int *j = i + 2 ; j < len ; j+= 2){
	int tmp = (*i - *j) * (*i - *j) + (*(i + 1) - *(j + 1)) * (*(i + 1) - *(j + 1));
	if(tmp > max)
	  max = tmp;
      }
    }
    printf("%d\n",max);
    free(ch);
    free(px);
    ch = NULL;
    px = NULL;
  }
  return 0;
}
