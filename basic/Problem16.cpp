/*Author: Vector Wang*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int sublength,length,nsame,same=0;
	char substring[128];
	char string[512];
	gets(substring);
	gets(string);
	for(sublength = 0;substring[sublength] != NULL;sublength++){
	}
	for(length = 0;string[length]!=NULL;length++){
	}
	for(int i=0;i<length;i++){
		nsame = 0;
		for(int j=0;j<sublength;j++){
			if(substring[j] != string[i + j]){
				nsame ++;
			}
		}
		if(nsame==0){
			same ++;
		}
	}
	cout << same << endl;
	return 0;
}
