#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int m = 0, r, l;
        for(int i=0; i<n; i++){
            cin >> r;
            if(r>=m)m=r;
        }
        if(m<10) l = 1;
        else if(m>=10 && m<20) l = 2;
        else if(m>=20) l = 3;
        cout << l << endl;
    }

    return 0;
}
