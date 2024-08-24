#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    while(scanf("%d",&x) != EOF){

    cin >> y >> z;

        if(x>y && y<=z) cout << ":)" << endl;
        else if(x<y && y>=z) cout << ":(" << endl;
        else if(x<y && y<z && (z-y)<(y-x)) cout << ":(" << endl;
        else if(x<y && y<z && (z-y)>= (y-x)) cout << ":)" << endl;
        else if(x>y && y>z && (x-y)>(y-z)) cout << ":)" << endl;
        else if(x>y && y>z && (x-y)<=(y-z) ) cout << ":(" << endl;
        else if(x==y){
            if(y<z) cout << ":)" << endl;
            else cout << ":(" << endl;
        }

    }

    return 0;
}
