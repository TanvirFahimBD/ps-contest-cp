#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 1;
    cin >> t;
    while(t>0){

        int a, i, x = 0, y=0, z=0, w = 0, p = 1;
        int r=1;
        int arr[20];
        cin >> a;

        for(i=0; i<a; i++){
            cin >> arr[i];
        }

        for(i=0; i<a; i++){
            if(a==1){
                r = arr[0] * arr[0];
            }
            if(a==2){
                r *= arr[i];
            }
            if(a>2){
                for(;;){
                     if(arr[i]%2==0){
                        arr[i] = arr[i]/2;
                        x++;
                    }
                    else if(arr[i]%3 == 0){
                        arr[i] = arr[i]/3;
                        y++;
                    }
                    else if(arr[i]%5 == 0){
                        arr[i] = arr[i]/5;
                        z++;
                    }
                    else if(arr[i]%7 == 0){
                        arr[i] = arr[i]/7;
                        w++;
                    }
                    if(arr[i]!=0){
                        p++;
                        continue;
                    }else break;
                }

            }

            if(x>0) r *= 2;
            if(y>0) r *= 3;
            if(z>0) r *= 5;
            if(w>0) r *= 7;
            r = r * p;

        }

        cout << "Case " << count << ": " << r << endl;

        count++;

        t--;
    }

    return 0;
}

