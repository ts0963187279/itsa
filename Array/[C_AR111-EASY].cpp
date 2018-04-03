/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<string> output(4);
  output[0] = "Hi"; output[1] = "Hello"; output[2] = "How do you do"; output[3] = "How are you";
  int pointer = 0;
  string hello;
  while(getline(cin,hello)){
    if(!hello.compare("Hi") || !hello.compare("Hello") || !hello.compare("How do you do") || !hello.compare("How are you")){
      cout << output[pointer] << endl;
      pointer = (pointer + 1) % 4;
    }else{
      cout << "Sorry" << endl;
      pointer = 0;
    }
  }
  return 0;
}
