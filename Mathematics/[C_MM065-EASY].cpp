/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int N,a1,a2,a3,price,one,five,fifty;
  char tmp;
  cin >> N >> tmp >>a1 >> tmp >> a2 >> tmp >> a3;
  price = a1 * 15 + a2 * 20 + a3 *30;
  if(price > N)
    cout << 0 << endl;
  else{
    N -= price;
    fifty = N / 50 ;
    N %= 50;
    five = N / 5;
    N %= 5;
    one = N;
    cout << one << "," << five << "," << fifty << endl;
  }
  return 0;
}

