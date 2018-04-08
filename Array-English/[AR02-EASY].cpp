/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<int> polynomials(1000,0),next_polynomials(1000,0);
  int a,b,c,d,top = 2,next_top = 2;
  cin >> a >> b >> c >> d;
  polynomials[2] = a;
  polynomials[1] = b;
  polynomials[0] = c;
  next_polynomials = polynomials;
  for(int i = 0 ; i < d - 1 ; i++){
    vector<int> tmp_polynomials(1000,0);
    int tmp_top = 0;
    for(int j = next_top ; j >= 0 ; j--){
      for(int k = top ; k >=0 ; k--){
	if(j + k > tmp_top)
	  tmp_top = j + k;
	tmp_polynomials[j + k] += polynomials[k] * next_polynomials[j];
      }
    }
    next_top = tmp_top;
    next_polynomials = tmp_polynomials;
  }
  cout << next_polynomials[next_top];
  for(int i = next_top - 1 ; i >= 0 ; i--)
    cout << " " << next_polynomials[i];
  cout << endl;
  return 0;
}

