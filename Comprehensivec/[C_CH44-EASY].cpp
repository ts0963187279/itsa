/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    vector<int> c;
    string ID;
    cin >> ID;
    for(int i = 0 ; i < ID.size() - 1; i++)
      c.push_back(int(ID[i]) - int('0'));
    int v = 26 - (((c[0] + c[2] + c[4] + c[6] + c[8] + c[10]) + 3 *(c[1] + c[3] + c[5] + c[7] + c[9] + c[11])) % 26);
    if(char(int('A') + v - 1) == ID[ID.size() - 1])
      cout << "valid" << endl;
    else
      cout << "invalid" << endl;
  }
  return 0;
}
