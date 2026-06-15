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

      if (amount <= 0) // exception

         throw "amount should be greater than zero";

         balance += amount;
         cout << amount << " rs is credited" << endl;
   }

   void withdraw(int amount)
   {
      if (amount > 0 && amount <= balance)
      {
         balance -= amount;
         cout << amount << " rs is debited" << endl;
      }
      else if (amount < 0) // exception
      {
         throw "amount should be greater than zero";
      }
      else // exception
      {
         throw "your balance is low";
      }
   }
};

int main()
{
   customer K("karan", 5000, 21);

   try
   {

      K.deposit(100);
      K.withdraw(6000);
      K.deposit(100);
   }
   catch (const char *e)
   {
      cout << "exception occured" << e << endl;
   }

   return 0;
}