#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline long getnum() {
    //long chr = getchar_unlocked();
    long chr = getchar();
    if (isspace(chr)){
        //chr = getchar_unlocked();
        chr = getchar();
    }
 
    long a = chr - '0';
    //while (isdigit(chr = getchar_unlocked()))
    while (isdigit(chr = getchar()))
        a = a * 10 + chr - '0';
 
    return a;
}


int32_t main(){
    
    /*
    #ifndef INPUTOUTPUTFILE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    */
    
    
    fast
    
    long n = getnum();


    long ans = 0;
    long prev = getnum();

    long temp;
    for (size_t i = 0; i < n-1; i++)
    {
        temp = getnum();
        if(prev>temp){
            ans+=(prev-temp);
        }
        else{
            prev = temp;
        }
        
    }
    cout << ans;
    
}
