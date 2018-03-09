/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m,a,b,c;
    cin >> m;
    map<string,int> lines;
    for(int i = 0 ; i < m ; i++){
      string name;
      int length;
      cin >> name >> length;
      lines.insert(pair<string,int>(name,length));
    }
    for(map<string,int>::iterator i = lines.begin() ; i != lines.end() ; i++){
      for(map<string,int>::iterator j = next(i,1) ; j != lines.end() ; j++){
	for(map<string,int>::iterator k = next(j,1) ; k != lines.end() ; k++){
	  if(i->second + j->second > k->second && i->second + k->second > j->second && j->second + k->second > i->second)
	    cout << i->first << " " << j->first << " " << k->first << endl;
	}
      }
    }
  }
  return 0;
}

