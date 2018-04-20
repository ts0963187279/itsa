/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <cctype>
int main(){
  int N;
  map<char,int> weight;
  weight[')'] = 8;
  weight['('] = 0;
  weight['*'] = 2;
  weight['/'] = 2;
  weight['^'] = 3;
  weight['-'] = 1;
  weight['+'] = 1;
  cin >> N;
  cin.ignore();
  while(N -- > 0){
    string infix,postfix;
    vector<char> stack(512);
    getline(cin,infix);
    int pointer = -1;
    for(int i = 0 ; i < infix.size() ; i++){
      string tmp;
      if(isdigit(infix[i]) || isalpha(infix[i])){
	tmp += infix[i];
	i++;
	while(isdigit(infix[i]) || isalpha(infix[i])){
	  tmp += infix[i];
	  i++;
	}
	i --;
	if(postfix.size() != 0)
	  postfix += ' ';
	postfix += tmp;
      }else if(infix[i] == '*' || infix[i] == '/' || infix[i] == '+' || infix[i] == '-' || infix[i] == '^' || infix[i] == '(' || infix[i] == ')'){
	if(pointer == -1 || infix[i] == '('){
	  stack[pointer + 1] = infix[i];
	  pointer ++;
	}else if(infix[i] == ')'){
	  while(stack[pointer] != '('){
	    if(postfix.size() != 0)
	      postfix += ' ';
	    postfix += stack[pointer];
	    pointer --;
	  }
	  pointer --;
	}else{
	  int w1 = weight[infix[i]] , w2 = weight[stack[pointer]];
	  if(w2 >= w1){
	    while(w2 >= w1){
	      if(postfix.size() != 0)
		postfix += ' ';
	      postfix += stack[pointer];
	      pointer --;
	      if(pointer == -1){
		break;
	      }
	      w2 = weight[stack[pointer]];
	    }
	  }
	  stack[pointer + 1] = infix[i];
	  pointer ++;
	}
      }
    }
    for(;pointer >= 0; pointer--){
      if(stack[pointer] != '('){
	if(postfix.size() != 0)
	  postfix += ' ';
	postfix += stack[pointer];
      }
    }
    cout << postfix << endl;
  }
  return 0;
}

