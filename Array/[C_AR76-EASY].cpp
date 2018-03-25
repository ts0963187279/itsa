/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  int n;
  map<int,map<int,int> > accounts;
  accounts[123][456] = 9000;  accounts[456][789] = 5000;  accounts[789][888] = 6000;  accounts[336][558] = 10000;
  accounts[775][666] = 12000;  accounts[566][221] = 7000;
  cin >> n;
  while(n -- > 0){
    int a,b;
    cin >> a >> b;
    if(accounts.find(a) != accounts.end())
      if(accounts[a].find(b) != accounts[a].end())
	cout << accounts[a][b] << endl;
      else
	cout << "error" << endl;
    else
      cout << "error" << endl;
  }
  return 0;
}

