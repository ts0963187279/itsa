/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int n,a,b,line = 0;
  bool check = true;
  cin >> n >> a >> b;
  vector<vector<int> > game(a,vector<int>(b));
  for(int i = 0 ; i < a ; i ++)
    for(int j = 0 ; j < b ; j ++)
      cin >> game[i][j];
  for(int i = 0 ; i < a ; i ++){
    check = true;
    for(int j = 0 ; j < b ; j++){
      if(game[i][j] != n){
	check = false;
	break;
      }
    }
    if(check){
      cout << "All " << n << "'s on row " << i << endl;
      line ++;
    }
  }  
  for(int i = 0 ; i < a ; i ++){
    check = true;
    for(int j = 0 ; j < b ; j++){
      if(game[j][i] != n){
	check = false;
	break;
      }
    }
    if(check){
      cout << "All " << n << "'s on column " << i << endl;
      line ++;
    }
  }
  check = true;
  for(int i = 0 ; i < a ; i ++){
    if(game[i][i] != n){
      check = false;
      break;
    }
  }
  if(check){
    cout << "All " << n << "'s on diagonal" << endl;
    line ++;
  }
  for(int i = 0 ; i < a ; i ++){
    if(game[i][a - i - 1] != n){
      check = false;
      break;
    }
  }
  if(check){
    cout << "All " << n << "'s on subdiagonal" << endl;
    line ++;
  }
  if(line == 0)
    cout << "There is no line with all " << n << endl;
  return 0;
}
