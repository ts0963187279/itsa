/*Author: Vector Wang*/  
using namespace std;  
#include <iostream>  
#include <vector>
#include <algorithm>
#include <cctype>  
  
int main(){  
  while(true){  
    string input;  
    bool jump = true;  
    vector<int> merge;
    getline(cin,input);  
    for(int i = 0 ; i < input.size() ; i++){  
      if(isdigit(input[i])){  
	int tmp = int(input[i++]) - int('0');  
	while(input[i] != ' ' && i < input.size()){  
	  tmp *= 10;  
	  tmp += int(input[i++]) - int('0');  
	}
	merge.push_back(tmp);
	if(tmp > 0)  
	  jump = false;
      }
    }
    if(jump)  
      break;
    getline(cin,input);  
    for(int i = 0 ; i < input.size() ; i++){  
      if(isdigit(input[i])){  
	int tmp = int(input[i++]) - int('0');  
	while(input[i] != ' ' && i < input.size()){  
	  tmp *= 10;  
	  tmp += int(input[i++]) - int('0');  
	}
	merge.push_back(tmp);
      }
    }
    sort(merge.begin(),merge.end());
    for(int i = 0 ; i < merge.size() ; i++){
      cout << merge[i];
      if(i != merge.size() - 1)
	cout << " ";
    }
    cout << endl;
  }  
  return 0;  
}  
