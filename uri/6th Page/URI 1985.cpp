///==================================================================================
///                         ACCEPTED
///==================================================================================

///==================================================================================
///                         CONDITION:
///1. Depends on each product number multiply the product quantity with it's price & sum
///   with total price
///2. Maintain typecasting for int with float value mixed time
///==================================================================================

///==================================================================================
///                          LEARNING:
///==================================================================================

#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    int input_num;
    cin >> input_num;
    int product_num, product_qnt;
    double current_price, total_price = 0.0;

    while(input_num>0)
    {
        cin >> product_num >> product_qnt;

        if(product_num == 1001)
        {
            current_price = (float)product_qnt * 1.50;
            total_price += current_price;
        }
        else if(product_num == 1002)
        {
            current_price = (float)product_qnt * 2.50;
            total_price += current_price;
        }
        else if(product_num == 1003)
        {
            current_price = (float)product_qnt * 3.50;
            total_price += current_price;
        }
        else if(product_num == 1004)
        {
            current_price = (float)product_qnt * 4.50;
            total_price += current_price;
        }
        else if(product_num == 1005)
        {
            current_price = (float)product_qnt * 5.50;
            total_price += current_price;
        }

        input_num--;
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}

