#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){
        int x, y, n = 0, sum = 0;
        cin >> x >> y;
        for(int i = 0; i<y; i++){
            if(x%2 == 0){
                n = x+1;
                sum += n;
                x += 3;
            }else if(x%2 != 0){
                sum += x;
                x += 2;
            }
        }
        cout << sum << endl;
            t--;
    }

    return 0;
}
