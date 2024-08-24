#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1){
        int n, d, in;
        cin >> n;
        if(n==0)break;
        int arr[n][n];

            for(int i=0; i<n; i++){
                d = i+1;
                in = 2;
                for(int j=0; j<=i; j++, d--){
                    arr[i][j] = d;
                }
            for(int j=i+1; j<n; j++, in++){
                    arr[i][j] = in;
                }
            }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==0) printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
             }
             cout << endl;
        }
             cout << endl;
    }

    return 0;
}

