#include<iostream>
using namespace std;
int main()
{
    int n, mult;
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        mult = i*n;
        cout<<i<<" x "<<n<<" = "<<mult<<endl;
    }
    return 0;
}
