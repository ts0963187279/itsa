/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <vector>

int main(){
  vector<vector<int> > matrix(2,vector<int>(2));
  for(int i = 0 ; i < 2 ; i++){
    for(int j = 0 ; j < 2 ; j++){
      cin >> matrix[i][j];
    }
  }
  double a,b,c,d;
  a = matrix[1][1] / ((matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) * 1.0 );
  b = (-1 * matrix[0][1]) / ((matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) * 1.0 );
  c =  matrix[1][0] / ((matrix[1][0] * matrix[0][1] - matrix[0][0] * matrix[1][1]) * 1.0 );
  d = (-1 * matrix[0][0]) / ((matrix[1][0] * matrix[0][1] - matrix[0][0] * matrix[1][1]) * 1.0 );
  if(a == (int)a)
    cout << fixed << setprecision(0) << a << " ";
  else
    cout << fixed << setprecision(1) << a << " ";
  if(b == (int)b)
    cout << fixed << setprecision(0) << b << endl;
  else
    cout << fixed << setprecision(1) << b << endl;
  if(c == (int)c)
    cout << fixed << setprecision(0) << c << " ";
  else
    cout << fixed << setprecision(1) << c << " ";
  if(d == (int)d)
    cout << fixed << setprecision(0) << d << endl;
  else
    cout << fixed << setprecision(1) << d << endl;
  return 0;
}

