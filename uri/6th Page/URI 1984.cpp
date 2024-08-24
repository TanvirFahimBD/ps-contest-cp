///==================================================================================
///                         ACCEPTED
///==================================================================================

///==================================================================================
///                         CONDITION:
///1. COUNT LENGTH OF THE NUMBER
///2. IF MOD OF THE NUMBER IS NOT EQUAL 0 THEN COUNT MOD, ELIMINATE THE LAST VALUE OF THE
///   NUMBER BY DIVIDE, CREATE NEW NUMBER BY APPEND MOD
///3. DURING THE LAST VALUE 0 SKIP STEP 2'S MOD STEP, APPEND 0 AS MOD
///==================================================================================

///==================================================================================
///                          LEARNING:
///1. COUNT LENGTH OF AN INT: len = to_string(in_num).length();
///2. CONVER IS STRING FROM INT: to_string(out_temp);
///==================================================================================

#include<iostream>
#include <string>
using namespace std;

int main()
{
    long long in_num, out_num;
    int len, out_temp, n;
    string out_res;
    cin >> in_num;

    len = to_string(in_num).length();
//    cout << "length: " << len << endl;

    for(len; len>0; len--)
    {
        if(in_num%10 != 0)
        {
            out_temp = in_num%10;
            in_num = in_num / 10;
            out_res += to_string(out_temp);
//            cout << "Break before: " << out_res << endl;
        }
        else if(in_num%10 == 0)
        {
            in_num = in_num / 10;
            out_res += to_string(0);
//            cout << "Break before but 0 on number last: " << out_res << endl;
        }

    }

    cout << out_res << endl;

    return 0;
}

