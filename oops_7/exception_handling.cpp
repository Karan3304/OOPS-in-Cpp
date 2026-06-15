#include <iostream>
using namespace std;


// exception handling usiontg normal if else 
class customer
{
   string name;
   int balance, acc_num;

public:
   customer(string name, int balance, int acc_num)
   {
      this->name = name;
      this->balance = balance;
      this->acc_num = acc_num;
   }

   void deposit(int amount)
   {

      if (amount > 0)
      {
         balance += amount;
         cout << amount << " rs is credited" << endl;
      }
      else if (amount <= 0)
      {
         cout << "amount should be greater than zero" << endl;
      }
   }

   void withdraw(int amount)
   {
      if (amount > 0 && amount <= balance)
      {
         balance -= amount;
         cout << amount << " rs is debited" << endl;
      }
      else if (amount < 0)
      {
         cout << "amount should be greater than zero" << endl;
      }
      else
      {
         cout << "your balance is lowd" << endl;
      }
   }
};

int main()
{
   customer K("karan", 5000, 21);
   K.deposit(200);
   K.withdraw(6000);

   return 0;
}