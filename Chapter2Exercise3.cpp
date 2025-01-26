/*Program File Name: Chapter2Exercise3
Programmer: Patrick Liao
Date: 1.26.2025
Requirements: Write a program that will compute the total sales tax on a $95 purchase. Assume the sales tax is 4 percent, and the county sales tax is 2 percent.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    double purchase = 95.00;                                                                                                                                                //total purchase amount
    double staxrate = 4;                                                                                                                                                    //sales tax rate
    double ctaxrate = 2;                                                                                                                                                    //county tax rate
    float salestax = (purchase * (staxrate/100)) + (purchase * (ctaxrate/100));                                                                                             //calculate total tax amount
        
    cout << "With a purchase of $" << purchase << ", a sales tax of " << staxrate << "%, and a county sales tax of " << ctaxrate << "%, the total sales tax is $";          //display message
    cout << fixed << setprecision(2) << salestax << endl;                                                                                                                   //display total tax to a precision of 2
    return 0;

}

