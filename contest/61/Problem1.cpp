/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <iomanip>
int main(){
  int N;
  cin >> N;
  while(N -- > 0){
    int degree;
    double summer = 0,non_summer = 0;
    cin >> degree;
    for(int i = 1 ; i <= degree ; i++){
      if(i <= 120){
	summer += 2.10;
	non_summer += 2.10;
      }
      else if(i <= 330){
	summer += 3.02;
	non_summer += 2.68;
      }
      else if( i <= 500){
	summer += 4.39;
	non_summer += 3.61;
      }
      else if(i <= 700){
	summer += 4.97;
	non_summer += 4.01;
      }else{
	summer += 5.63;
	non_summer += 4.50;
      }
    }
    cout << fixed << setprecision(2)<<"Summer months:" << summer << endl;
    cout << fixed << setprecision(2)<<"Non-Summer months:" << non_summer << endl;
  }
  return 0;
}

