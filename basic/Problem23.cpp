/*Author: Vector Wang*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(int argc, char *argv[]) {
	int n,a1,a2,a3;
	int ft,f,o;
	char str[80];
	char *hold;
		cin.getline(str,10,',');
		n = atoi(str);
		cin.getline(str,10,',');
		a1 = atoi(str);
		cin.getline(str,10,',');
		a2 = atoi(str);
		cin.getline(str,10);
		a3 = atoi(str);
	if(a1*15+a2*20+a3*30 > n)
		cout << 0 <<endl;
	else{
		n = n-(a1*15+a2*20+a3*30);
		ft = n/50;
		n = n%50;
		f = n/5;
		n = n%5;
		o = n;
		cout << o << "," << f << "," << ft << endl;
	}
	return 0;
}
