/// Count whole cost - Count borrow Money(CC-Price can be negative then output can be negative)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, price, money, amount, borrow, cost=0;
    cin >> price >> money >> amount;
    for(i=1; i<=amount; i++){
        cost += (price*i);
    }

    borrow = cost - money;
    if(borrow<0){
        cout << "0" << endl;
    }
    else cout << borrow << endl;

    return 0;
}
