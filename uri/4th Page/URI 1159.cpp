#include<iostream>
using namespace std;

int main()
{
    while(1){
        int n, i = 0, sum = 0;
        cin >> n;
        if(n%2 == 0 && n!=0){
            for(; i<5; i++){
                sum += n;
                n += 2;
            }        }else if(n%2 != 0 && n!= 0){
            n = n+1;
            for(; i<5; i++){
                sum += n;
                n += 2;
            }
        }
        else if(n == 0){
            break;
        }

        cout << sum << endl;
    }

    return 0;
}

