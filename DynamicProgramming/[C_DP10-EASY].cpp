/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>

int main(){
  int n;
  cin >> n;
  vector<string> people(n);
  map<string,int> moneys;
  for(int i = 0 ; i < n ; i++){
    cin >> people[i];
    moneys[people[i]] = 0;
  }
  while(true){
    string lender;
    int money,b;
    cin >> lender;
    if(lender[0] == '0')
      break;
    cin >> money >> b;
    moneys[lender] -= money;
    money /= b;
    for(int i = 0 ; i < b ; i++){
      string borrower;
      cin >> borrower;
      moneys[borrower] += money;
    }
  }
  for(int i = 0 ; i < n ; i++){
    cout << people[i] << " " << moneys[people[i]] << endl;
  }
  return 0;
}

