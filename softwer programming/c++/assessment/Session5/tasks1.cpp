// 1. Create a Java class called PaymentProcessor with two overloaded methods processPayment(): one that takes only an amount, and one that takes amount and a coupon code. Print which version is called and the final amount in each case.

#include <iostream>
using namespace std;

class PaymentProcessor
{
public:

    
    void processPayment(double amount)
    {
        cout << "Payment processed without coupon." << endl;
        cout << "Final Amount: " << amount << endl;
    }

    void processPayment(double amount, string couponCode)
    {
        double finalAmount = amount - 100;

        cout << "Payment processed with coupon: "
             << couponCode << endl;
        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor payment;

    
    payment.processPayment(1000);

    cout << endl;

  
    payment.processPayment(1000, "SAVE100");

    return 0;
}