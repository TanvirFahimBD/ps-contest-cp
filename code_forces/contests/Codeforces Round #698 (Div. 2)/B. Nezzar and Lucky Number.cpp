#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {

        int i, n, d, sum = 0;
        cin>>n>>d;
        for(i = 0; i<n; i++)
            {
                cin>>i;
            }
        for(i = 0; i<n; i++)
            {
              if(i%10==d){
                cout<<"YES";
              }
              else if((i/10)+(i%10)==d){
                cout<<"YES";
              }
              else{
                cout<<"NO";
              }
            }
            cout<<endl;
        t--;
    }


    getch();
}

