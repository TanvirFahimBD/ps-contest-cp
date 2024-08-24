#include<iostream>
using namespace std;

int main()
{
    int N[1000], i, j = 0, t;
    cin >> t;
    for(i = 0; i<1000; i++){
        cout <<"N["<< i <<"] = " << j << endl;
        j++;
            if(j>=t){
                j = 0;
            }
        }

    return 0;
}
