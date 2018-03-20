/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
int main(){
  map<int,char> table;
  table[0] = '0';  table[1] = '1';  table[2] = '2';  table[3] = '3';  table[4] = '4';  table[5] = '5';
  table[6] = '6';  table[7] = '7';  table[8] = '8';  table[9] = '9';  table[10] = 'a';  table[11] = 'b';
  table[12] = 'c';  table[13] = 'd';  table[14] = 'e';  table[15] = 'f';  table[16] = 'g';  table[17] = 'h';
  table[18] = 'i';  table[19] = 'j';  table[20] = 'k';  table[21] = 'l';  table[22] = 'm';  table[23] = 'n';
  table[24] = 'o';  table[25] = 'p';  table[26] = 'q';  table[27] = 'r';  table[28] = 's';  table[29] = 't';
  table[30] = 'u';  table[31] = 'v';  table[32] = 'w';  table[33] = 'x';  table[34] = 'y';  table[35] = 'z';
  int n,m;
  cin >> n >> m;
  cout << "The base " << m << " representation of "<< n << " is ";
  vector<char> ans;
  while(n != 0){
    ans.push_back(table[n % m]);
    n = n / m;
  }
  for(int i = ans.size() - 1 ; i >= 0 ; i--)
    cout << ans[i];
  cout << "." << endl;
  return 0;
}
