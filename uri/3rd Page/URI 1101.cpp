#include<iostream>
using namespace std;

int main()
{
    int m, n;
    while(true){
    cin >> m >> n;
    if(m<=0 || n<=0){
        break;
    }
    else if(n<m){
        int sum = 0;
        for(; n<=m; n++){
            cout << n << " ";
            sum += n;
        }
       cout << "Sum=" << sum << endl;
        }

    else if(m<n){
        int sum = 0;
        for(; m<=n; m++){
            cout << m << " ";
            sum += m;
        }
       cout << "Sum=" << sum << endl;
        }
    }

    return 0;
}
