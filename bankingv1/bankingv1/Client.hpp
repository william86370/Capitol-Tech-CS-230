//
//  Client.hpp
//  bankingv1
//


#ifndef Client_hpp
#define Client_hpp

#include <stdio.h>

#endif /* Client_hpp */

#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;
struct client{
    string fname;
    string lname;
    double checking; //balance
    double savings; //balance
};
void Encryption()
{
    if (std::ifstream("clients.dat"))
    {
    ifstream infile;
    ofstream outfile;
    infile.open ("clients.dat");
    string password ="fuck";
    outfile.open ("clientsencripted.dat");
    while (!infile.eof())
    {
        for (int i=0 ;i<4 ; i++)
        {
            char name;
            infile.get(name);
            name = name + password[i];
            name = name - password[0];
            outfile << name;
        }
    }
    infile.close();
    outfile.close();
    cout << "\n\n";
    
}
}


void Decryption()
{
    if (std::ifstream("clientsencripted.dat"))
    {
        std::cout << "File already exists" << std::endl;
    
    ofstream outfile;
    outfile.open ("clients.dat");
    ifstream infile2;
    ofstream outfile2;
    infile2.open("clientsencripted.dat");
    string password = "fuck";
    {
        for (int i=0 ;i<4 ; i++)
        {
            char name;
            infile2.get(name);
            name = name + password[0];
            name = name - password[i];
            outfile<<name;
        }
    }
    infile2.close();
    outfile.close();
    cout << "\n\n";
    
    }
}




void writeNewClients(client cl[], int size)
{
    Decryption();
    ofstream outData;
    outData.open("clients.dat", ios::app);
    int i;
    for (i = 0; i < size; i++)
        outData <<cl[i].fname<<" "<<cl[i].lname<<" "<<0.00<<" "<<0.00<<endl;
    outData.close();
    Encryption();
}
int viewAllClients() //show all clients and return the number of records
{
    Decryption();
    ifstream inData;
    inData.open("clients.dat");
    string data;
    //find the number of records in the file
    int numRec = 0;
    while (! inData.eof())
    {     inData >>data;
        numRec++;
    }
    numRec = (numRec -1)/4;
    cout <<"Number of records: "<<numRec<<endl; //TEST
    inData.close();
    inData.clear();
    //read from file and display to screen
    int i, counter = 0;
    
    inData.open("clients.dat");
    cout <<"ACC\tName\tCH\tSV\n";
    while (! inData.eof())
    {
        cout <<counter<<"\t";
        for (int i = 0; i < 4; i++)
        {
            inData >> data;
            cout <<data<<"\t";
        }
        counter++;
        cout <<"\n";
        if (counter == numRec)
            break;
    }
    inData.close();
    Encryption();
    return numRec;
}

void enterNewClients(client cl[], int size)
{
    Decryption();
    int i;
    for (i = 0; i < size; i++)
    {
        cout <<"Full Name: ";
        cin >>cl[i].fname>>cl[i].lname;
    }
   Encryption();
}

void transactions(client &cl)
{
    
    int choice;
    double amount;
    system("CLS");
    cout <<"\tClient Information:\n"
    <<"\t==================\n"
    <<"\tName: "<<cl.fname<<" "<<cl.lname<<"\n"
    <<"\tChecking Balance: $"<<fixed<<setprecision(2)<<cl.checking<<"\n"
    <<"\tSavings Balance: $"<<cl.savings<<"\n";
    do
    {
        cout <<"Transaction Type\n"
        <<"================\n"
        <<"1. Deposit to Checking\n"
        <<"2. Deposit to Savings\n"
        <<"3. Withdraw from Checking\n"
        <<"4. Withdraw from Savings\n"
        <<"5. Cancel Transaction\n"
        <<"Enter your choice: ";
        cin >> choice;
        
    }while (choice < 1 || choice > 5);
    
    switch(choice)
    {
        case 1:
            cout <<"Enter a checking deposit amount: $";
            cin >>amount;
            cl.checking += amount;
            break;
        case 2:
            cout <<"Enter a savings deposit amount: $";
            cin >>amount;
            cl.savings += amount;
            break;
        case 3:
            cout <<"Enter a checking withdraw amount: $";
            cin >>amount;
            cl.checking -= amount;
            break;
        case 4:
            cout <<"Enter a savings withdraw amount: $";
            cin >>amount;
            cl.savings -= amount;
            break;
            
    }
}
void loadBuffer(client cl[], int size)
{
    Decryption();
    ifstream inData;
    inData.open("clients.dat");
    int i;
    for (i = 0; i < size; i++)
    {
        inData >>cl[i].fname;
        inData >>cl[i].lname;
        inData >>cl[i].checking;
        inData >>cl[i].savings;
    }
    Encryption();
}
