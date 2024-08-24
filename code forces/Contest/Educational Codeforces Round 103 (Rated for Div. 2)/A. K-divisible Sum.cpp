#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int i, n, k, count=0;
        cin>>n>>k;
        char arr[n];

         for(i=0; i<n; i++)
                {
                    if(arr[i]%k !=0)
                    {
                    count++;
                    }
                    else{
                        for(i=0; i<k; i++)
                           {
                            arr[i]=arr[i]+1;
                            break;
                           }
                    }
                }
            cout<<arr[0]<<endl;

            t--;
        }
    getch();
}
