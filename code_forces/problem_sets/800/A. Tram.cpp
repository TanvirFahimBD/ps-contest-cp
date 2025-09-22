/// Count remain - Compare with before remaining & show the highest remaining as capacity

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, stop, exit, enter, remain = 0, capacity=0;

        cin >> stop;
        for(i=0; i<stop; i++){
            cin >> exit >> enter;
                remain = enter + remain - exit;
            if(capacity < remain){
               capacity = remain;
            }
        }
        cout << capacity << endl;

    return 0;
}
