/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
struct food{
  double w,cal,cel,cp;
  int index;
};
bool compareByCP(const food &,const food &);
int main(){
  int W,N,Mod;
  cin >> W >> N >> Mod;
  vector<food> foods(N);
  vector<double> get(N,0);
  for(int i = 0 ; i < N ; i++){
    foods[i].index = i;
    cin >> foods[i].w >> foods[i].cal >> foods[i].cel;
    if(Mod == 1)
      foods[i].cp = foods[i].cal / foods[i].w;
    else
      foods[i].cp = foods[i].cel / foods[i].w;
  }
  sort(foods.begin(),foods.end(),compareByCP);
  double totalCal = 0 , totalCel = 0;
  for(int i = 0 ; i < N ; i++){
    if(W >= foods[i].w){
      get[foods[i].index] = foods[i].w;
      totalCal += foods[i].cal;
      totalCel += foods[i].cel;
    }else if(W > 0){
      get[foods[i].index] = W;
      totalCal += foods[i].cal / foods[i].w * W;
      totalCel += foods[i].cel / foods[i].w * W;
    }
    W -= foods[i].w;
  }
  for(int i = 0 ; i< N ; i++)
    printf("%.3lf ",get[i]);
  printf("%.3lf ",totalCal);
  printf("%.3lf\n",totalCel);
  return 0;
}
bool compareByCP(const food &a , const food &b){
  return a.cp > b.cp;
}
