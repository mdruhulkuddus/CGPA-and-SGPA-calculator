#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Total_courses, TotalCredit = 0, serial = 1;
    double SGPA, sumOf_credit_Grade = 0;
    cout << "How many courses you taken in this semester : ";
    cin >> Total_courses;
    while(Total_courses--)
    {
        int credit, grade ;
        cout <<  "\n" <<"Credit of " << serial << " NO course : ";
        cin >> credit;
        cout << "\n" << "Grade of " << serial << " NO course : ";
        cin >> grade;
        sumOf_credit_Grade += credit * grade;
        TotalCredit += credit;
        serial++;
    }
    SGPA =  sumOf_credit_Grade / TotalCredit * 1.0;
    cout << "-------------------------------------------\n";
    cout <<  "\t" <<setprecision(2) << fixed << "Your SGPA : "  << SGPA;
    cout << "\n-------------------------------------------\n";
}
