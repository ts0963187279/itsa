/*Author: Vector Wang*/
#include <iostream>    
#include <string.h>    
#include <sstream>    
#include <vector>    
#include <algorithm>    
using namespace std;    
bool f(string a,string b);    
int main()    
{    
    int num;    
    cin>>num;    
    cin.get();    
    for(int i=0;i<num;i++)    
    {    
        string input;    
        getline(cin,input);    
        istringstream delim(input);    
        string token;    
        vector<string>arr;    
        while(getline(delim,token,' '))    
        {    
            arr.push_back(token);    
        }    
        sort(arr.begin(),arr.end(),f);    
        for(int j=0;j<arr.size();j++)    
        {    
            if(j!=arr.size()-1)    
                cout<<arr[j]<<" ";    
            else    
                cout<<arr[j]<<endl;    
        }    
    }    
    return 0;    
}    
bool f(string a,string b)    
{    
    if(a[0]>b[0])    
        return true;    
    else if(a[0]==b[0])    
    {    
        if(a.length()>b.length())    
            return true;    
        else if(a.length()==b.length() && a.length()==2)    
        {    
            if(a[1]>b[1])    
                return true;    
            else    
                return false;    
        }    
        else if(a.length()==b.length() && a.length()==3)    
        {    
            if(a[2]>b[2])    
                return true;    
            else    
                return false;    
        }    
        else    
            return false;    
    }    
    else    
        return false;    
}  
