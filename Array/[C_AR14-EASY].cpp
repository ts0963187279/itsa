using namespace std;
#include<iostream>
int main(){
  int N;
  cin >> N;
  while(N-- > 0){
    int n,m,x,y,L;
    cin >> n >> m >> L ;
    int seats[n][m];
    for(int i = 0 ; i < n ; i++)
      for(int j = 0 ; j < m ; j++)
	seats[i][j] = 0;
    for(int i = 0 ; i < L ; i++){
      cin >> x >> y;
      x -= 1;
      y -= 1;
      seats[x][y] = 6;
      if(x-1 >= 0)
	seats[x-1][y]++;
      if(x+1 < n)
	seats[x+1][y]++;
      if(y+1 < m)
	seats[x][y+1]++;
      if(y-1 >= 0)
	seats[x][y-1]++;
    }
    bool can = true;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < m ; j++){
	if(seats[i][j] == 0){
	  can = false;
	  break;
	}
      }
    }
    if(can){
      cout << "Y" <<endl;
    }else
      cout << "N" <<endl;
  }
  return 0;
}
