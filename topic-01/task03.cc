#include <iostream>
using namespace std;

class BankAccount
{
   private:
     double balance;

    public:
        BankAccount(){balance = 0.0;}

        void deposit(double amount)
        {
            if(amount >0)
            {
                balance += amount;
            }
            else
            {
                cout << "Deposit amount must be positive." << endl;
            }
        }

        void withdraw(double amount)
        {
            if(amount >0 && amount <= balance)
            {
                balance -= amount;
            }
            else
            {
                cout << "Invalid withdrawal amount." << endl;
            }
        }
        double getBalance()
        {
            return balance;
        }

};
int main() {
    BankAccount account;
    account.deposit(10000);
    account.withdraw(500);

    cout << "Current balance: " << account.getBalance() << endl;
    return 0;   
}