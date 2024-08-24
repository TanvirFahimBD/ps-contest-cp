#include<iostream>
using namespace std;

int main()
{
    int N[20], i = 19, y;
    int x = 0, j = 0;
    while(i>=0){
        cin >> y;
        N[i] = y;
        i--;
    }

    for(int x = 0, j = 0; x<=19; x++, j++){
        cout << "N["<<x<<"] = " << N[j] << endl;
        continue;
    }

    return 0;
}



