#include<bits/stdc++.h>

using namespace std;

int main(){


    string s;

    getline(cin>>ws,s);

    int co=0;
    int c1=0;

    for (int i = 0; i < s.size(); i++)
    {
        if(islower(s[i])){
            co++;
        }else{
            c1++;
        }
    }


    if(c1)
    
}