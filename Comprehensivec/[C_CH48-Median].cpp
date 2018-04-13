/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int H,M;
    cin >> H >> M;
    if(H == 12)
      if(M > 0)
	printf("11:");
      else
	printf("12:");
    else{
      if(M > 0)
	printf("%02d:",11 - H);
      else
	printf("%02d:",12 - H);
    }
    if(M == 0)
      printf("%02d\n",M);
    else
      printf("%02d\n",60 - M);
  }
  return 0;
}
