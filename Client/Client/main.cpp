//
//  main.cpp
//  Client
//
//  Created by william wright on 10/5/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#include <iostream>
#include "ClientList.hpp"
using namespace std;
int menu(){
    int option;
    cout <<"Main menu\n"
    <<"==========\n"
    <<"1.) Add a new Client\n"
    <<"2.) chnage info about client\n"
    <<"3.) find highest paying client\n"
    <<"4.) view all clients\n"
    <<"5.) exit program\n"
    <<"enter your coice: ";
    cin >> option;
    return option;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    ClientList *clients = new ClientList();
    client* temp;
    int option;
    do{
        option = menu();
        switch(option){
            case 1:{
                string tempn;
                string templ;
                int tempID;
                int temppur;
                
                cout<<"enter client ID"<<endl;
                cin>>tempID;
                cout<<"enter clients first name"<<endl;
                cin>> tempn;
                cout<<"enter clients last name"<<endl;
                cin>> templ;
                cout<<"enter clitns total purchase ampunt"<<endl;
                cin>> temppur;
                clients->createcustomer(tempn,templ,tempID,temppur);
                break;
            }case 2:{
                int option;
                cout<<"Search Menu"<<endl;
                cout<<"==========="<<endl;
                cout<<"1.) search by name"<<endl;
                cout<<"2.) search by client ID"<<endl;
                cin >> option;
                if(option ==1){
                    int option;
                    
                    cout<<"Search Menu"<<endl;
                    cout<<"==========="<<endl;
                    cout<<"1.) search by first name"<<endl;
                    cout<<"2.) search by last name"<<endl;
                    cin >> option;
                    if (option ==1){
                        string name;
                        cout<<"enter a first name"<<endl;
                        cin >> name;
                        temp = clients->searchbyfname(name);
                        if(temp==NULL){
                            cout<<"the client your searching for dosent exist"<<endl;
                        }else{
                            temp->getInfo();
                        }
                    }else{
                        string name;
                        cout<<"enter a last name"<<endl;
                        cin >> name;
                        temp = clients->searchbylname(name);
                        if(temp==NULL){
                            cout<<"the student your searching for dosent exist"<<endl;
                        }else{
                            temp->getInfo();
                        }
                    }
                }else{
                    int name;
                    cout<<"enter a client id"<<endl;
                    cin >> name;
                    temp = clients->searchbyid(name);
                    if(temp==NULL){
                        cout<<"the client your searching for dosent exist"<<endl;
                    }else{
                        temp->getInfo();
                    }
                    
                    
                }
                string tempn;
                string templ;
                int tempID;
                int temppur;
                
                cout<<"enter client ID"<<endl;
                cin>>tempID;
                cout<<"enter clients first name"<<endl;
                cin>> tempn;
                cout<<"enter clients last name"<<endl;
                cin>> templ;
                cout<<"enter clitns total purchase ampunt"<<endl;
                cin>> temppur;
                temp->setFName(tempn);
                temp->setid(tempID);
                    break;
            }case 3:{
                client *temp = clients->findhighestpur();
                cout<<"the highest paying client is"<<endl;
                temp->getInfo();
                
                
                
                
                
                break;
            }
            case 4:{
                clients->displayclient();
                break;
            }
                
        }
        
        
    }while(option != 5);
    return 0;
}


