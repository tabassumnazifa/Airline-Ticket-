#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class tour
{
protected:
    string name;
    string mail;
    int i;
    double contact;

public:
    void show()
    {
        cin.ignore();
        cout << "Enter Your Name:";
        getline(cin,name);
        cout << "\nEnter Your Contact no:";
        cin >> contact;
        cin.ignore();
        cout << "\nEnter Your E-mail:";
        getline(cin,mail);
        cout << endl;
        cout << "Press 1 for Business Class\nPress 2 for Economy Class" << endl;
        cin >> i;
        if (i == 1)
        {
            cout << "Welcome To Business Class" << endl;
        }
        else if (i == 2)
        {
            cout << "Welcome To Economy Class" << endl;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
};
class japan : public tour
{
protected:
    float ticket;
    int p, pin, on, pin1;
    double am, bkas, am1, card;

public:
    void regi()
    {
        cout << "\t\t\t\tWelcome To Japan" << endl;
        show();
        cout << "Business Class:$500" << endl;
        cout << "Economy Class:$300" << endl;
    }
    void pay()
    {
        cout << "Choose Your Payment Option" << endl;
        cout << "1.Online\n2.Payment On Counter" << endl;
        cin >> p;
        if (p == 1)
        {
            cout << "Choice Your Online Platform For Payment" << endl;
            cout << "1.BKash\n2.Card" << endl;
            cin >> on;
            if (on == 1)
            {
                cout << "Enter Your Bkash Number:";
                cin >> bkas;
                cout << "Enter Amount:";
                cin >> am;
                cout << "Enter Pin:";
                cin >> pin;
                cout<<"Thank You For Your Payment\n You can Collect Your Ticket From Your E-mail"<<endl;
                cout<<"Ticket Confirmed Succcessfully"<<endl;
                cout<<"-------------------------"<<endl;
            }
            else if (on == 2)
            {
                cout << "Enter Your Credit Card Number:";
                cin >> card;
                cout << "Enter Amount:";
                cin >> am1;
                cout << "Enter Pin:";
                cin >> pin1;
                cout<<"Thank You For Your Payment\n You can Collect Your Ticket From Youe E-mail"<<endl;
                cout<<"Ticket Confirmed Succcessfully"<<endl;
                cout<<"-------------------------"<<endl;


            }
            else
            {
                cout << "Invalid Choice!!" << endl;
            }
        }
        else if (p == 2)
        {
            cout << "You Must Come To The Counter For Cash Payment" << endl;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }

    }
};

class china : public japan, public tour
{
public:
    void regi()
    {
        cout << "\t\t\t\tWelcome To China" << endl;
        japan::show();
        cout << "Business Class:$550" << endl;
        cout << "Economy Class:$340" << endl;
         pay();
    }
};

class USA :public japan, public tour
{
public:
    void regi()
    {
        cout << "\t\t\t\tWelcome To USA" << endl;
       japan:: show();
        cout << "Business Class:$700" << endl;
        cout << "Economy Class:$540" << endl;
        pay();
    }
};

class Singapur :public japan, public tour
{
public:
    void regi()
    {
        cout << "\t\t\t\tWelcome To Singapore" << endl;
        japan::  show();
        cout << "Business Class:$450" << endl;
        cout << "Economy Class:$340" << endl;
         pay();
    }
};

class Dubai :public japan, public tour
{
public:
    void regi()
    {
        cout << "\t\t\t\tWelcome To Dubai" << endl;
         japan:: show();
        cout << "Business Class:$650" << endl;
        cout << "Economy Class:$540" << endl;
         pay();
    }
};

int main()
{
    int ch;
    japan j;
    china c;
    USA u;
    Dubai d;
    Singapur s;
    cout << "\n\t\t\t\t\t|XYZ AirLines|"<<endl;
    cout << "\t\t\t\t|-----------------------|" << endl;
    cout << "\t\t\t\t|Choice Your Destination|" << endl;
    cout << "\t\t\t\t|\t1.Japan\n\t\t\t\t|\t2.China\n\t\t\t\t|\t3.USA\n\t\t\t\t|\t4.Singapore\n\t\t\t\t|\t5.Dubai" << endl;
    cout << "\t\t\t\t|-----------------------|" << endl;
    cout << "Enter Your Choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        j.regi();
        j.pay();
        break;
    }
    case 2:
    {
        c.regi();
        break;
    }
    case 3:
    {
        u.regi();
        break;
    }
    case 4:
    {
        s.regi();
        break;
    }
    case 5:
    {
        d.regi();
        break;
    }
    default:
    {
        cout << "INVALID CHOICE!!" << endl;
    }
    }
   getch();
}
