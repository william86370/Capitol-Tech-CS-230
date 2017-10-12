//
//  Client.hpp
//  Client
//
//  Created by william wright on 10/5/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//
//Create a single linked list of clients for your business.

//Each client has a name, an id and the amount of purchases they have done with you so far.

//You should be able to:

//Update the list item by finding a specific client

//Add a record (new client)

//display all clients

//Find the client with the highest purchase amount.

//Find the average spending for your whole set of clients.
#ifndef Client_hpp
#define Client_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
#endif /* Client_hpp */
class client{
private:
    string fname;
    string lname;
    int id;
    int purchases;
    client* nextclient;
public:
    client();
    client(string,string,int,int,client*);
    string getfname();
    string getlname();
    int getid();
    int getpurchase();
    void setfname(string);
    void setlname(string);
    void setid(int);
    void setperchase(int);
    client* getnextclient();
    void setnextclient(client*);
    void getinfo();
};
client::client(){
    fname = "";
    lname = "";
    id = 0;
    purchases = 0;
    nextclient = NULL;
}
client::client(string name2,string l,int id2,int pur,client* c){
    fname = name2;
    lname = l;
    id = id2;
    purchases = pur;
    setnextclient(c);
}
int client::getid(){
    return id;
}
int client::getpurchase(){
    return purchases;
}
string client::getfname(){
    return fname;
}
string client::getlname(){
    return lname;
}
void client::setid(int id2){
     id=id2;
}
void client::setperchase(int p2){
     purchases = p2;
}
void client::setfname(string n){
    fname = n;
}
void client::setlname(string n){
    lname = n;
}
client* client::getnextclient(){
    return nextclient;
}
void client::setnextclient(client* h){
    nextclient = h;
}

void client::getinfo(){
    
    cout<<"client ID: "<<id<<endl;
    cout<<"client's first name is: "<<fname<<endl;
    cout<<"clients last name is: "<<lname<<endl;
    cout<<"clients total purchase amount is: "<<purchases<<endl;
}
