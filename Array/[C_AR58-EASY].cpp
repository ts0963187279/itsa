/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    string a,b;
    int top , carry = 0;
    cin >> a >> b;
    top = a.size() > b.size() ? a.size() : b.size();
    vector<int> num(top);
    for(int i = 0 ; i < top ; i++){
      int sum1,sum2;
      if(i < a.size())
	sum1 = int(a[a.size() - i - 1]) - int('0');
      else
	sum1 = 0;
      if(i < b.size())
	sum2 = int(b[b.size() - i - 1]) - int('0');
      else
	sum2 = 0;
      int tmp = (sum1 + sum2 + carry) % 10;
      carry = (sum1 + sum2 + carry) / 10;
      num[top - i - 1] = tmp;
    }
    if(carry > 0)
      cout << carry;
    for(int i = 0 ; i < top ; i++)
      cout << num[i] ;
    cout << endl;
  }
  return 0;
}
