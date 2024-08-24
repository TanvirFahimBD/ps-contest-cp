//Before christ pass a nutral so 1 value will be add
//Christ specific value will be output
//Current will be 1

#include<iostream>
using namespace std;

int main()
{
    int n, year, cyear;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> year;
        if(year>2015){
            cyear = year-2014;
            cout << cyear << " A.C." << endl;
        }
        else if(year<2015){
            cyear = 2015-year;
            cout << cyear <<" D.C." << endl;
        }
        else{
            cout << "1 A.C." << endl;
        }
    }

    return 0;
}
