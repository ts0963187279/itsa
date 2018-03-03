using namespace std;
#include <iostream>

int main(){
  string s,t;
  bool isSubString;
  cin >> s >> t;
  for(int i = 0 ; i < t.size() ; i++){
    isSubString = true;
    for(int j = 0 ; j < s.size() ; j++){
      if(t[i + j] != s[j])
	isSubString = false;
    }
    if(isSubString)
      break;
  }
  if(isSubString)
    cout << "YES" <<endl;
  else
    cout << "NO" <<endl;
  return 0;
}

