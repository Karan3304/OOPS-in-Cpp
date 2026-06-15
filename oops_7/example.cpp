#include <iostream>
using namespace std;

class Myexception{
    protected:
    string msg;

    public:

    Myexception(string msg){
        this->msg = msg;
    }

    string what() const{
        return msg;
    }
};

class Myruntime_error : public Myexception {
    public:
    Myruntime_error(const string &msg):Myexception(msg){}
};

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

         throw Myruntime_error("amount should be greater than zero");

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
         throw Myruntime_error("amount should be greater than zero");
      }
      else // exception
      {
         throw Myruntime_error("your balance is low");
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
   catch (const Myruntime_error &e)
   {
      cout << "exception occured : " << e.what() << endl;
   }
   

   return 0;
}