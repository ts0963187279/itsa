/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    int month;
    cin >> month;
    if(month >=3 && month <=5)
      cout << "Spring" <<endl;
    if(month >=6 && month <=8)
      cout << "Summer" <<endl;
    if(month >=9 && month <=11)
      cout << "Autumn" <<endl;
    if(month == 12 || month <=2)
      cout << "Winter" <<endl;
  }
  return 0;
}

