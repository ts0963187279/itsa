/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n,lines = 0;
  vector<vector<int> > table(3,vector<int>(3));
  cin >> n;
  for(int i = 0 ; i < 3 ; i++)
    for(int j = 0 ; j < 3 ; j++)
      cin >> table[i][j];
  if(table[0][0] == n && table[0][0] == table[0][1] && table[0][0] == table[0][2]){
    lines = 1;
    cout << "All " << n << "'s on row " << 0 << endl;
  }
  if(table[1][0] == n && table[1][0] == table[1][1] && table[1][0] == table[1][2]){
    lines = 1;
    cout << "All " << n << "'s on row " << 1 << endl;
  }
  if(table[2][0] == n && table[2][0] == table[2][1] && table[2][0] == table[2][2]){
    lines = 1;
    cout << "All " << n << "'s on row " << 2 << endl;
  }
  if(table[0][0] == n && table[0][0] == table[1][0] && table[0][0] == table[2][0]){
    lines = 1;
    cout << "All " << n << "'s on column " << 0 << endl;
  }
  if(table[0][1] == n && table[0][1] == table[1][1] && table[0][1] == table[2][1]){
    lines = 1;
    cout << "All " << n << "'s on column " << 1 << endl;
  }
  if(table[0][2] == n && table[0][2] == table[1][2] && table[0][2] == table[2][2]){
    lines = 1;
    cout << "All " << n << "'s on column " << 2 << endl;
  }
  if(table[0][0] == n && table[0][0] == table[1][1] && table[0][0] == table[2][2]){
    lines = 1;
    cout << "All " << n << "'s on diagonal"<< endl;
  }
  if(table[0][2] == n && table[0][2] == table[1][1] && table[0][2] == table[2][0]){
    lines = 1;
    cout << "All " << n << "'s on subdiagonal"<< endl;
  }
  if(lines != 1)
    cout << "There is no line with all " << n << endl;
  return 0;
}

