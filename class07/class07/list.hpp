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
   void createstudent(string id,string fn,string ln,int cred);
    void displaystudent();
    Student* searchbyfname(string);
    Student* searchbylname(string);
    Student* searchbystuid(string);
};
List::List(){
    ptrhead = NULL;
    ptrend = NULL;
}
void List::createstudent(string ID, string FN, string LN , int cr){
    Student *temp = new Student(ID,FN,LN,cr,NULL);
    if(ptrhead == NULL){
        ptrhead = temp;
        ptrend = temp;
        temp = NULL;
    }else{
        ptrend->nextstudent(temp);
        ptrend = temp;
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
    while(ptr->getfname() != name){
        if(ptr->getnexrstudent()==NULL){
            return NULL;
        }else{
            ptr = ptr->getnexrstudent();
        }
    }
    return ptr;
}
Student* List::searchbylname(string name){
    ptr = ptrhead;
    while(ptr->getlname()!= name){
        if(ptr->getnexrstudent()==NULL){
            return NULL;
        }else{
            ptr = ptr->getnexrstudent();
        }
    }
    return ptr;
}
void List::displaystudent(){
    Student *temp = new Student;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getinfo();
        cout<<endl;
        temp = temp->getnexrstudent();
    }
   
}
