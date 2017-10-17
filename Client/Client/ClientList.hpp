//
//  list.hpp
//  class07
//
//  Created by william wright on 9/21/17.
//  Copyright © 2017 william wright. All rights reserved.
//

#ifndef list_hpp
#define list_hpp
#include "Client.hpp"
#include <stdio.h>

#endif /* list_hpp */
class ClientList{
private:
    client* ptrhead;
    client* ptrend;
    client* ptr;
    
    
public:
    ClientList();
    void createcustomer(string name,string name2,int id,int pur);
    void displayclient();
    void sortclient();
    client* searchbyfname(string);
    client* searchbylname(string);
    client* searchbyid(int);
    client* findhighestpur();
};
ClientList::ClientList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void ClientList::createcustomer(string fName,string lName, int id, int pur){
    client *temp= new client(fName,lName,id,pur,NULL);
    temp->setFName(fName);
      temp->setLName(lName);
    temp->setid(id);
    temp->setperchase(pur);
    temp->setnextclient(NULL);
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setnextclient(temp);
        ptrend=temp;
    }
}
client* ClientList::searchbyid(int name){
    ptr = ptrhead;
    while(ptr->getnextclient()!= NULL){
        if(ptr->getid()==name){
            return ptr;
        }else{
            ptr = ptr->getnextclient();
        }
    }
    return NULL;
}
client* ClientList::searchbyfname(string name){
    ptr = ptrhead;
    while(ptr->getnextclient()!= NULL){
        if(ptr->getFName()==name){
            return ptr;
        }else{
            ptr = ptr->getnextclient();
        }
    }
    return NULL;
}

void ClientList::displayclient(){
    client *temp = new client;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getInfo();
        cout<<endl;
        temp = temp->getnextclient();
    }
    
}
client* ClientList::searchbylname(string name){
    ptr = ptrhead;
    while(ptr->getnextclient()!= NULL){
        if(ptr->getlname()==name){
            return ptr;
        }else{
            ptr = ptr->getnextclient();
        }
    }
    return NULL;
}
client* ClientList::findhighestpur(){
    
    client *temp = new client;
    client *temp2 = new client;
    temp = ptrhead;
    temp2 = ptrhead;
    int highestpur = temp->getpurchase();
    while(temp!=NULL)
    {
        if (temp->getpurchase() > highestpur) {

            temp2 = temp;
            highestpur = temp->getpurchase();
        }
        temp = temp->getnextclient();
    }
    return temp2;
}
/*
void List::sortstudents(){
    Student* temphead = ptrhead;
    Student* temp2 = NULL;
    string tempid;
    string tempfn;
    string templn;
    int tempcr;
    
    int counter =-1;
    while(temphead){
        counter++;
        temphead = temphead->getnexrstudent();
    }
    temphead = ptrhead;
    temp2 = temphead->getnexrstudent();
    for(int i =0;i<counter;i++){
        for(int j =0;j<counter;j++){
            if(temphead->getstuid() > temp2->getstuid()){
                
                tempid = temphead->getstuid();
                tempfn = temphead->getFName();
                templn = temphead->getlname();
                tempcr = temphead->getcredits();
                temphead->setID(temp2->getstuid());
                temphead->setName(temp2->getFName(), temp2->getlname());
                temphead->setcredits(temp2->getcredits());
                temp2->setID(tempid);
                temp2->setName(tempfn,templn);
                temp2->setcredits(tempcr);
                temp2 = temp2->getnexrstudent();
                temphead = temphead->getnexrstudent();
            }else{
                temp2 = temp2->getnexrstudent();
                temphead = temphead->getnexrstudent();
            }
        }
        temphead = ptrhead;
        temp2 = temphead->getnexrstudent();
    }
    
}
*/
