#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n, r, count = 0;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            r = ((i*i)+(4*i)+3);
            if(r%n == 0)
            {
                count++;
            }
            else{
                continue;
            }
        }
        cout<<count<<endl;

        t--;
    }


    return 0;
}
