
/*
555 Timer Astable Multivibrator Calculations
Created on 6/11/17
Author - John Lucey
Last Edited - 6/11/17
*/

//Pre-Processor Directive
#include <iostream>
#include <math.h>
using namespace std;

//Main Function
int main()
{
    //Variables Declared
    double r1 = 0, r2 = 0, c1 = 0, freq_out, duty_cycle;
    double *ptr_freq_out, *ptr_duty_cycle;

    //Function Prototype
    void Timer_Calc(double, double, double, double *, double *);

    //Pointers assigned
    ptr_freq_out = &freq_out;
    ptr_duty_cycle = &duty_cycle;

    //Purpose of program displayed
    cout << "555 Timer Astable Multivibrator Calculations Calculator!!!\n\n\n" << endl;

    //While Loop to ensure radius>0
    while(r1<=0)
    {
        cout << "Enter a Value Greater than 0 for R1 :" << endl;
        cin >> r1;
    }
    while(r2<=0)
    {
        cout << "Enter a Value Greater than 0 for R2 :" << endl;
        cin >> r2;
    }

    while(c1<=0)
    {
        cout << "Enter a Value Greater than 0 for c1 :" << endl;
        cin >> c1;
    }
    //Calculation Function Called
    Timer_Calc(r1, r2, c1, ptr_freq_out, ptr_duty_cycle);

    cout << " Output Frequency = " << *ptr_freq_out <<
            " Duty Cycle = " << *ptr_duty_cycle <<endl;
    return 0;
}

//Function to calculate area & volume and return values as pointers
void Timer_Calc(double r1, double r2, double c1, double *ptr_freq_out, double *ptr_duty_cycle)
{
    *ptr_freq_out = 1.44 / ((r1 + (2*r2)) * c1);
    *ptr_duty_cycle = (r1 + r2)/(r1 + 2*r2);
    return;
}
