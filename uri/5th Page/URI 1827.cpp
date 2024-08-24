#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[102][102];
    while(scanf("%d", &n) != EOF){
            int c = n-1;
            int r = n/3;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j)arr[i][j] = 2;
                else arr[i][j] = 0;
                if(j==c) arr[i][j] = 3;
            }c--;
        }

        for(int i=r; i<n-r; i++){
            for(int j=r; j<n-r; j++){
             arr[i][j] = 1;
             if(i==n/2 && j==n/2) arr[i][j] = 4;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
            cout << endl;

    }

    return 0;
}
