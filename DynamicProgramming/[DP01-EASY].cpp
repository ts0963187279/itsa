/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
void reduction(unsigned long long int &,unsigned long long int &);
unsigned long long int GCD(unsigned long long int ,unsigned long long int );
int main(){
  int N;
  cin >> N;
  vector<vector<unsigned long long int> > denominator(N+1,vector<unsigned long long int>(N+1,0)) , molecular(N+1,vector<unsigned long long int>(N+1,1)),
    left_denominator(N+1,vector<unsigned long long int>(N+1)) , left_molecular(N+1,vector<unsigned long long int>(N+1)),
    right_denominator(N+1,vector<unsigned long long int>(N+1)) , right_molecular(N+1,vector<unsigned long long int>(N+1));
  for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j <= i ; j++){
      unsigned long long int sum;
      cin >> left_denominator[i][j] >> right_denominator[i][j];
      sum = left_denominator[i][j] + right_denominator[i][j];
      left_molecular[i][j] = right_molecular[i][j] = sum;
    }
  }
  denominator[0][0] = 1;
  for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j <= i ; j ++){
      unsigned long long int den , mole;
      den = denominator[i][j] * left_denominator[i][j];
      mole = molecular[i][j] * left_molecular[i][j];
      denominator[i + 1][j] = denominator[i + 1][j] * mole + den * molecular[i + 1][j];
      molecular[i + 1][j] = mole * molecular[i + 1][j];
      reduction(denominator[i + 1][j] , molecular[i + 1][j]);
      den = denominator[i][j] * right_denominator[i][j];
      mole = molecular[i][j] * right_molecular[i][j];
      denominator[i + 1][j + 1] = denominator[i + 1][j + 1] * mole + den * molecular[i + 1][j + 1];
      molecular[i + 1][j + 1] = mole * molecular[i + 1][j + 1];
      reduction(denominator[i + 1][j + 1] , molecular[i + 1][j + 1]);
    }
  }
  for(int i = 0 ; i <= N ; i++)
    cout << denominator[N][i] << "/" << molecular[N][i] << endl;
  return 0;
}
void reduction(unsigned long long int &den , unsigned long long int &mole){
  int tmp = GCD(den , mole);
  den /= tmp;
  mole /= tmp;
}
unsigned long long int GCD(unsigned long long int a,unsigned long long int b){
  if(a == 0)
    return b;
  return b > a ? GCD(b % a, a) : GCD(a % b, b);
}
