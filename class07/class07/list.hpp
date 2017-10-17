//
//  list.hpp
//  class07
//
//  Created by william wright on 9/21/17.
//  Copyright © 2017 william wright. All rights reserved.
//

#ifndef list_hpp
#define list_hpp
#include "student.hpp"
#include <stdio.h>

#endif /* list_hpp */
class List{
private:
    Student* ptrhead;
    Student* ptrend;
    Student* ptr;
    
 
public:
    List();
   void createStudent(string id,string fn,string ln,int cred);
    void displaystudent();
    void sortstudents();
    Student* searchbyfname(string);
    Student* searchbylname(string);
    Student* searchbystuid(string);
};
List::List(){
    ptrhead = NULL;
    ptrend = NULL;
}
void List::createStudent(string ID, string FN, string LN , int cr){
    Student *temp= new Student(ID,FN,LN,cr,NULL);
    temp->setcredits(cr);
    temp->setName(FN, LN);
    temp->setID(ID);
    temp->nextstudent(NULL);
    temp->nextstudent(NULL);
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->nextstudent(temp);
        ptrend=temp;
    }
}
Student* List::searchbystuid(string id){
    ptr = ptrhead;
    while(ptr->getstuid() != id){
        if(ptr->getnexrstudent()==NULL){
            return NULL;
        }else{
        ptr = ptr->getnexrstudent();
        }
    }
    return ptr;
}
Student* List::searchbyfname(string name){
    ptr = ptrhead;
    while(ptr->getnexrstudent()!= NULL){
        if(ptr->getFName()==name){
            return ptr;
        }else{
           ptr = ptr->getnexrstudent();
        }
    }
    return NULL;
}
    
void List::displaystudent(){
    Student *temp = new Student;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getInfo();
        cout<<endl;
        temp = temp->getnexrstudent();
    }
   
}
Student* List::searchbylname(string name){
    ptr = ptrhead;
    while(ptr->getnexrstudent()!= NULL){
        if(ptr->getlname()==name){
            return ptr;
        }else{
            ptr = ptr->getnexrstudent();
        }
    }
    return NULL;
}
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
