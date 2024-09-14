#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t != 0)
    {

        int n, d, i=0, arr[i];
        cin>>n>>d;
        cin>>arr[i];
        for(; i<n-1; i++)
        {
            cin>>arr[i];
        }

        for(; i<n-1; i++)
        {
            if(d>=arr[i])
            {
                continue;
            }
            else
                break;
        }
        cout<<"Yes"<<endl;

        t = t-1;
    }

    getch();
}
