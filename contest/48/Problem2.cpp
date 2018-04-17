/*Author: Vector Wang*/  
using namespace std;  
#include <iostream>  
  
int main(){  
  int N;  
  cin >> N;
  while(N -- > 0){
    int n ;
    cin >> n;
    if(n == 1)  
      cout << "4599*026=1533*078" << endl;  
    else if(n == 2)  
      cout << "7599*016=2533*048" << endl;  
    else  
      cout << "None." << endl;
  }
  return 0;  
}
