/*Author: Vector Wang*/
#include<iostream>
#include<sstream>
using namespace std;      
       
int main() {      
    int n;      
    cin >> n;      
    getchar();
    while(n -- >0)
    {      
        string input;      
        cin >> input;      
        stringstream ss(input);      
        string token;
	string tok;
        int int_t[4];      
        int c = 0;      
        while (getline(ss, token, '/'))      
        {      
            stringstream ssA(token);      
            while (getline(ssA, tok, ','))      
            {      
                int_t[c] = stoi(tok);      
                c++;      
            }      
        }      
        c = 0;      
        int mol;
        int dem;       
        int_t[0] = int_t[0]*int_t[3];      
        int_t[2] = int_t[2]*int_t[1];      
        mol = int_t[0] + int_t[2];      
        int_t[1] = int_t[1]*int_t[3];
	int_t[3] = int_t[1]*int_t[3];
        dem = int_t[1];      
        if(mol < dem)
        {      
            for(int i = 1;i < mol;i++)      
            {      
                if(mol % i == 0 && dem % i == 0)      
                {      
                    if(i != 1)      
                    {      
                        while(mol % i == 0 && dem % i == 0)      
                        {      
                            mol = mol / i;      
                            dem = dem / i;      
                        }      
                    }      
                }      
            }      
        }      
        else      
        {      
            for(int i = 1;i < dem;i++)      
            {      
                if(mol % i == 0 && dem % i == 0)      
                {      
                    if(i != 1)      
                    {      
                        while(mol % i == 0 && dem % i == 0)      
                        {      
                            mol = mol / i;      
                            dem = dem / i;      
                        }      
                    }      
                }      
            }      
        }      
        cout << mol << "/" << dem << endl;      
    }      
    return 0;
}






