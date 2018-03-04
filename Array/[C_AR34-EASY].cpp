using namespace std;
#include <iostream>
#include <map>
bool check(int[]);
int main(){
  int IDCode[11],X1,X2;
  string ID;
  map<char,int> code;
  code.insert(pair<char,int>('A',10));
  code.insert(pair<char,int>('B',11));
  code.insert(pair<char,int>('C',12));
  code.insert(pair<char,int>('D',13));
  code.insert(pair<char,int>('E',14));
  code.insert(pair<char,int>('F',15));
  code.insert(pair<char,int>('G',16));
  code.insert(pair<char,int>('H',17));
  code.insert(pair<char,int>('J',18));
  code.insert(pair<char,int>('K',19));
  code.insert(pair<char,int>('L',20));
  code.insert(pair<char,int>('M',21));
  code.insert(pair<char,int>('N',22));
  code.insert(pair<char,int>('P',23));
  code.insert(pair<char,int>('Q',24));
  code.insert(pair<char,int>('R',25));
  code.insert(pair<char,int>('S',26));
  code.insert(pair<char,int>('T',27));
  code.insert(pair<char,int>('U',28));
  code.insert(pair<char,int>('V',29));
  code.insert(pair<char,int>('X',30));
  code.insert(pair<char,int>('Y',31));
  code.insert(pair<char,int>('W',32));
  code.insert(pair<char,int>('Z',33));
  code.insert(pair<char,int>('I',34));
  code.insert(pair<char,int>('O',35));
  cin >> ID;
  IDCode[0] = code[ID[0]] /10;
  IDCode[1] = code[ID[0]] %10;
  for(int i = 2 ; i < 11 ; i++){
    IDCode[i] = int(ID[i-1]) - int('0');
  }
  if(check(IDCode))
    cout << "CORRECT!!!"<<endl;
  else
    cout << "WRONG!!!"<<endl;
  return 0;
}
bool check(int IDCode[11]){
  int P;
  P = IDCode[0] + IDCode[9] + IDCode[10];
  for(int i = 1 ; i< 9 ; i++)
    P += IDCode[i] * (10-i);
  if(P % 10 == 0)
    return true;
  return false;
}
