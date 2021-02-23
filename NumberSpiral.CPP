#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline long long getnum() {
    //long chr = getchar_unlocked();
    long chr = getchar();
    if (isspace(chr)){
        //chr = getchar_unlocked();
        chr = getchar();
    }
 
    long long a = chr - '0';
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
    
    long long n = getnum();

    

    long long tempRow,tempCol;
    for (size_t i = 0; i < n; i++)
    {
        tempRow = getnum();
        tempCol = getnum();

        //cout << tempRow << " " << tempCol << " " << endl;

        long long ans = 1;
        long long maxi = max(tempRow,tempCol);
        long long sum = (maxi-1)*maxi;
        sum += 1;

        //cout << "Sum is " << sum << endl;
        long mul = 1;
        if(maxi%2==0) {
            mul *= (-1);
        }

        long difference = abs(tempCol-tempRow);
        if(tempRow==tempCol) {
            ans = sum;
        }
        else if(tempRow<tempCol) {
            ans = sum+(mul*difference);
        }
        else{
            ans = sum-(mul*difference);
        }
        cout << ans << endl;
    }
    
    
}
