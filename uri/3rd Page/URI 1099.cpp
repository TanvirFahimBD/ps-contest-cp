#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        int a, b, a1, b1, sum = 0;
        cin >> a >> b;
        a1 = a;
        b1 = b;
        if(a<b){
            for(; a<b ; a++){
                if(a1 == a){
                    continue;
                }
                if(a%2 != 0){
                 sum += a;
                }
            }
            cout << sum << endl;
        }else if(b<a){
            for(; b<a ; b++){
                if(b1 == b){
                    continue;
                }
                if(b%2 != 0){
                 sum += b;
                }
            }
            cout << sum << endl;
        }else{
            cout << sum << endl;
        }

        t--;
    }

    return 0;
}
