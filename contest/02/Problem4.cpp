/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <cstdio>
#define N 1000 + 5
int main(){
  char *c = (char *)malloc(N * sizeof(char));
  int **map = (int **)malloc(12*sizeof(int *)+12*12*sizeof(int));
  int **press = (int **)malloc(12*sizeof(int *)+12*12*sizeof(int));
  int x = 1 ,y = 1 , b;
  for(int i=0,*sm=(int *)(map+12),*sp=(int *)(press+12);i<12;sm+=12,sp+=12,i++){
    map[i] = sm;
    press[i] = sp;
  }
  for(int i = 0 ; i < 12 ; i++)
    for(int j = 0 ; j < 12 ; j++)
      map[i][j] = 0;
  for(int i = 0 ; i < 10 ; i++){
    gets(c);
    for(char *ch = c ; *ch != '\0' ; ch++){
      if(*ch == '#')
	map[x][y] = 0;
      else
	map[x][y] = 1;
      y++;
    }
    y = 1;
    x++;
  }
  for(int i = 0 ; i < 12 ; i++)
    press[1][i] = 0;
  bool find = false;
  while(!find){
    find = true;
    for(int i = 1 ; i < 10 ; i++)
      for(int j = 1 ; j < 11 ;j++)
	press[i + 1][j] = (map[i][j]+press[i][j]+press[i-1][j]+press[i][j-1]+press[i][j+1])%2;
    for(int i = 1 ; i < 11 ; i++){
      if(map[10][i] != (press[10][i]+press[9][i]+press[10][i-1]+press[10][i+1])%2){
	find = false;
	break;
      }
    }
    if(find){
      int counter = 0;
      for(int i = 1 ; i < 11 ; i++){
	for(int j = 1; j < 11 ; j++){
	  counter += press[i][j];
	}
      }
      printf("%d\n",counter);
    }
    press[1][1]++;
    b = 1;
    while(press[1][b] > 1){
      press[1][b] = 0;
      b++;
      press[1][b]++;
    }
  }
  free(c);
  free(map);
  free(press);
  map = NULL;
  press = NULL;
  c = NULL;
  return 0;
}

