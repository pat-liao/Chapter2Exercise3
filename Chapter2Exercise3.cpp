/*Program File Name: Chapter2Exercise3Part2
Programmer: Patrick Liao
Date: 2.22.2025
Requirements: Write a program that will compute the total sales tax given a user inputted purchase amount and sales and county tax rate.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    double purchase;                                                                                                                                                    //total purchase amount
    double staxrate;                                                                                                                                                    //sales tax rate
    double ctaxrate;                                                                                                                                                    //county tax rate

    cout << "How much did you purchase?: ";
    cin >> purchase;                                                                                                                                                    

    cout << "What is the sales tax rate?: ";
    cin >> staxrate;

    cout << "What is the county tax rate?: ";
    cin >> ctaxrate; ;                                                                                                                                                   //prompt user for purchase,sales tax, and county tax

    float salestax = (purchase * (staxrate/100)) + (purchase * (ctaxrate/100));                                                                                             //calculate total tax amount
        
    cout << "With a purchase of $" << purchase << ", a sales tax of " << staxrate << "%, and a county sales tax of " << ctaxrate << "%, the total sales tax is $";          //display message
    cout << fixed << setprecision(2) << salestax << endl;                                                                                                                   //display total tax to a precision of 2
    return 0;

}

