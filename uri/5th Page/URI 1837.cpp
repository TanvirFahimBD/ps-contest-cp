//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! Need to Properly explained
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, a1, b, b1, div, mod;

    cin >> a >> b;

    if(a<0){
        b1 = b;
        if(b<0) b1 = b*-1;
            for(mod=0; mod<b1; mod++){
                a1 = a-mod;
                if(a1%b == 0)break;
            }
        div = a1/b;
    }

    else{
        div = a/b;
        mod = a%b;
    }

    printf("%d %d\n",div,mod);

    return 0;
}

