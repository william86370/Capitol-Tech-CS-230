//
//  studentlist.hpp
//  Project 1
//
//  Created by william wright on 10/10/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef studentlist_hpp
#define studentlist_hpp
#include "student.hpp"
#include <stdio.h>

#endif /* studentlist_hpp */
class studentlist{
private:
    student* ptrhead;
    student* ptrend;
    student* ptr;
public:
    studentlist();
    void createstudent(string,string,classes*,student*);
    void createstudent(string,string,classes*[],double[],int);
    void displaystudents();
};
studentlist::studentlist(){
    ptrhead = NULL;
    ptrend = NULL;
}
void studentlist::createstudent(string fn, string ln , classes *c[],double gr[],int len){
    student *temp= new student(fn,ln);
    temp->setfname(fn);
    temp->setlname(ln);
    for(int i=0;i<len;i++){
        classlist* cls = temp->getclasslist();
        cls->createclass(c[i],gr[i]);
    }
    temp->setnext(NULL);
    
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setnext(temp);
        ptrend=temp;
    }
}
void studentlist::createstudent(string fn, string ln , classes * c, student * s){
    student *temp= new student(fn,ln);
    temp->setfname(fn);
    temp->setlname(ln);
    temp->setnext(NULL);
    
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setnext(temp);
        ptrend=temp;
    }
}
void studentlist::displaystudents(){
    student *temp = new student;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getinfo();
        cout<<endl;
        temp = temp->getnext();
    }
}
