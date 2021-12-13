#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double Loan, Interest_Per_Year, Payment;
    cout << "Enter initial loan: ";
    cin >> Loan;
    cout << "Enter interest rate per year (%): ";
    cin >> Interest_Per_Year;
    cout << "Enter amount you can pay per year: ";
    cin >> Payment;

    //use 'setw' to set width of table and 'left' to set left-alignment
    //you can change input argument of 'setw()' to see the effect
    //Try to change from 'left' to 'right' and see the effect
    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    //use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
    //you can change input argument of 'setprecision()' to see the effect
    double Prevbalance = Loan, Interest, Total, Newbalance;
    for(int count = 1; Newbalance > 0; count++){
    
        Interest = Prevbalance*(Interest_Per_Year/100);
        Total = Prevbalance + Interest;
        
        if(Total < Payment) Payment = Total;
        
        Newbalance = Total - Payment;
        cout << fixed << setprecision(2); 
        cout << setw(13) << left << count; 
        cout << setw(13) << left << Prevbalance;
        cout << setw(13) << left << Interest;
        cout << setw(13) << left << Total;
        cout << setw(13) << left << Payment;
        cout << setw(13) << left << Newbalance;
        cout << "\n";
        Prevbalance = Newbalance;
        
    }

    return 0;
}