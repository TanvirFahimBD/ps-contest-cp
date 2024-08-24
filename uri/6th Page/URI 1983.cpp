///==================================================================================
///                         ACCEPTED
///==================================================================================

#include<iostream>
using namespace std;

int main()
{
    int student_num;
    cin >> student_num;
    int reg_num[student_num], i, max_reg_num;
    double note[student_num], max_note = 0.0;

    for(i=0; i<student_num; i++)
    {
        cin >> reg_num[i] >> note[i];
    }

    for(i=0; i<student_num; i++)
    {
        if(note[i] > max_note)
        {
            max_note = note[i];
            max_reg_num = reg_num[i];
        }
    }

    if(max_note>=8 && max_note<=10)
    {
        cout << max_reg_num << endl;
    }
    else
    {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}


///==================================================================================
/// TAKING INPUT IN AN ARRAY THEN USE THAT ARRAY MAKE WORK EASY
/// USING FOR LOOP ON INCREMENT IS MORE EASEIR TO THINK
///==================================================================================
