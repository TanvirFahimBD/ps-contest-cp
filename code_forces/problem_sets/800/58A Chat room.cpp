///==================================================================================
///                         ACCEPTED
///==================================================================================

///==================================================================================
///                         CONDITION:
///1. Take the specific value in a string
///2. Compare with the Input string with the specific value. If match then increase the
///   position value of specific string, increase count of the match
///3. Compare the match value with the specific string legth
///==================================================================================

///==================================================================================
///                          LEARNING:
///==================================================================================

#include<iostream>
#include <string>
using namespace std;

int main()
{
    int length, new_pos = 0, value=0;
    string message = "hello", new_message;
    cin >> new_message;
    length = new_message.size();

    for(int i=0; length>i; i++)
    {
        if(message[new_pos] == new_message[i])
        {
            new_pos++;
        }
    }

    if(new_pos == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

