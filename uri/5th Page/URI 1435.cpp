#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    while(1){
        int n, cr;
        cin >> n;
        int r = 0, c = n-1;
        if(n==0)break;
        int arr[n][n];
        cr = n/2;
        if(n%2 == 1)cr++;

        for(int cf=1; cf<=cr; cf++){
            for(int i=r; i<=c; i++){
                for(int j=r; j<=c; j++){
                    arr[i][j] = cf;
                    }
                }
            r++;
            c--;
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

