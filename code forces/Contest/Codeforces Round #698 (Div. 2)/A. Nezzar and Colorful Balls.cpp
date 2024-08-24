#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n, i, m, count = 1;
        cin>>n;
        char arr[n];
        for(i = 0; i<n; i++)
        {
            cin>>arr[i];
        }

        m = sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+m);
        for(i=0; i<m; i++)
        {
            if(arr[i]==arr[0] && arr[i] == arr[i-1])
            {
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }


    getch();
}

