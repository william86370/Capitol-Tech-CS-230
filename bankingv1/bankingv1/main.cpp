//
//  main.cpp
//  bankingv1
//


#include <iostream>
#include "Client.hpp"
int menu()
{
    int choice;
    cout <<"\t\tMAIN BANKING MENU\n"
    <<"\t\t=================\n"
    <<"\t\t1. Add NEW clients\n"
    <<"\t\t2. Transactions on clients accounts\n"
    <<"\t\t3. Show Report\n"
    <<"\t\t4. EXIT\n"
    <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

int main()
{
    int option;
    int nClients;  //number of new clients
    int dbClients; //number of clients in the file
    int clientIndex; //client to be picked for editing
    client cl[100];
    int i, j;
    
    do
    {
        system("CLS");
        option = menu();
        switch (option)
        {
            case 1: //data entry then save to file in append mode
                cout <<"How many clients do you want to add?: ";
                cin >>nClients;
                enterNewClients(cl, nClients);
                writeNewClients(cl, nClients);
                break;
            case 2: //view all clients then choose a client to edit the sized
                //buffer then rewrite the file completely
                dbClients = viewAllClients();
                cout <<"Pick an ACC acount number for transactions: ";
                cin >> clientIndex;
                //reload cl[] from file
                loadBuffer(cl, dbClients);
                //send the account to be edited
                transactions(cl[clientIndex]);
                //write to file
            {ofstream outData;
                Decryption();
                outData.open("clients.dat");
                for (i = 0; i < dbClients; i++)
                    outData <<cl[i].fName<<" "<<cl[i].lName<<" "<<cl[i].checking<<" "<<cl[i].savings<<endl;
                outData.close();}
                
                break;
            case 3://View all clients
                dbClients = viewAllClients();
                break;
            case 4: cout <<"Goodbye!\n";
                break;
            default: cout <<option<<" is an invalid option!\n";
        }
        system("PAUSE");
    }while (option != 4);
    
    
    
    return 0;
}
