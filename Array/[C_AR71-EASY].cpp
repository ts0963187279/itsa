/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  map<string,int> table;
  table["O"] = 0; table["A"] = 1; table["B"] = 2; table["AB"] = 3;
  int n;
  cin >> n;
  while(n -- > 0){
    int father,mother,children;
    string input;
    cin >> input;
    father = table[input];
    cin >> input;
    mother = table[input];
    cin >> input;
    children = table[input];
    if(father == 0 && mother == 0 && children == 0)
      cout << "YES" << endl;
    else if(father == 0 && mother == 1 && (children == 0 || children == 1))
      cout << "YES" << endl;
    else if(father == 1 && mother == 0 && (children == 0 || children == 1))
      cout << "YES" << endl;
    else if(father == 0 && mother == 2 && (children == 0 || children == 2))
      cout << "YES" << endl;
    else if(father == 2 && mother == 0 && (children == 0 || children == 2))
      cout << "YES" << endl;
    else if(father == 0 && mother == 3 && (children == 1 || children == 2))
      cout << "YES" << endl;
    else if(father == 3 && mother == 0 && (children == 1 || children == 2))
      cout << "YES" << endl;
    else if(father == 1 && mother == 1 && (children == 1 || children == 0))
      cout << "YES" << endl;
    else if(father == 1 && mother == 2)
      cout << "YES" << endl;
    else if(father == 2 && mother == 1)
      cout << "YES" << endl;
    else if(father == 1 && mother == 3 && children != 0)
      cout << "YES" << endl;
    else if(father == 3 && mother == 1 && children != 0)
      cout << "YES" << endl;
    else if(father == 2 && mother == 2 && (children == 2 || children == 0))
      cout << "YES" << endl;
    else if(father == 2 && mother == 3 && children != 0)
      cout << "YES" << endl;
    else if(father == 3 && mother == 2 && children != 0)
      cout << "YES" << endl;
    else if(father == 3 && mother == 3 && children != 0)
      cout << "YES" << endl;
    else
      cout << "IMPOSSIBLE" << endl;
  }
  return 0;
}

