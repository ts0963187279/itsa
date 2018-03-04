using namespace std;
#include <iostream>
int main(){
	int year;
	cin >> year;
	string animal[12];
	animal[0] = "rat";
	animal[1] = "ox";
	animal[2] = "tiger";
	animal[3] = "rabbit";
	animal[4] = "dragon";
	animal[5] = "snake";
	animal[6] = "horse";
	animal[7] = "sheep";
	animal[8] = "monkey";
	animal[9] = "rooster";
	animal[10] = "dog";
	animal[11] = "pig";
	if(year - 2008 < 0){
		cout << animal[12 + (year - 2008)%12];
	}else
		cout << animal[(year - 2008)%12];
	cout << endl;
	return 0;
}
