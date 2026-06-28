#include <iostream>
#include <fstream>
using namespace std;

// Function to add customer details to the file
void addCustomer()
{
    ofstream file("customer.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string name;
    int accountNumber;
    double balance;

    cout << "\nEnter Customer Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Balance: ";
    cin >> balance;

    file << name << " "
         << accountNumber << " "
         << balance << endl;

    file.close();

    cout << "\nCustomer added successfully!\n";
}

// Function to display all customers
void displayCustomers()
{
    ifstream file("customer.txt");

    if (!file)
    {
        cout << "File does not exist or cannot be opened!" << endl;
        return;
    }

    string name;
    int accountNumber;
    double balance;

    cout << "\n========== Customer Records ==========\n\n";

    while (file >> name >> accountNumber >> balance)
    {
        cout << "Customer Name : " << name << endl;
        cout << "Account No.   : " << accountNumber << endl;
        cout << "Balance       : " << balance << endl;
        cout << "--------------------------------------" << endl;
    }

    file.close();
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Bank Customer Management =====\n";
        cout << "1. Add Customer\n";
        cout << "2. Display Customers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addCustomer();
                break;

            case 2:
                displayCustomers();
                break;

            case 3:
                cout << "\nThank you!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}