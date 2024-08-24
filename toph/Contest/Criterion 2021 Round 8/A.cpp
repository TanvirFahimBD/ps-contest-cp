#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n, i, count=0, path = 0;
        char c[4];
        cin>>n;
        for(i=0; i<n; i++)
        {
            for(i=0;i<n;i++)
            {
                cin>>c[i];
                if(c[i]=='r')
                {
                    cout<<-1;
                    continue;
                }

            }
            for(i=0;i<n;i++)
            {
                cin>>c[i];
                if(c[i]=='f')
                {
                    count++;
                }
                else
                    break;
                path++;
            }
            cout<<count<<endl;
            cout<<path<<endl;
        }

        t--;
    }
    return 0;
}
