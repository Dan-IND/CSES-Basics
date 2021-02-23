#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


inline long getnum() {
    long chr = getchar();
    if (isspace(chr))
        chr = getchar();
 
    long a = chr - '0';
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
    //long n; cin >> n;
    bool check = true;

    if(n==1) {
        cout << "1" << endl;
        return 0 ;
    }
    if(n==4) {
        cout << "2 4 1 3" << endl;
        return 0 ;
    }
    if(n<=3){
        check = false;
    }
    long arr[n];
    if(!check) {
        cout << "NO SOLUTION" << "\n";
    }
    
    else{
        for (size_t i = 1; i <= n; i++)
        {
           if(i<=(ceil((float)n/2))) {
               //cout << i << " = " << (i*2-2) << endl;
               arr[(i*2-2)] = i;
           } 
           else{
               
               long temp = (( (i-ceil((float)n/2))*2 ) - 1);
               //cout << i << "= " << (( (i-ceil((float)n/2))*2 ) - 1) << endl;
               arr[temp] = i;
           }
        }
        for (size_t j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        
    }
    
}
