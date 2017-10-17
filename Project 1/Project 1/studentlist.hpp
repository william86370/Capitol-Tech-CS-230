//
//  studentlist.hpp
//  Project 1

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
    void createStudent(string,string,classes*,student*);
    void createStudent(string,string,classes*[],double[],int);
    void displayStudents();
};
studentlist::studentlist(){
    ptrhead = NULL;
    ptrend = NULL;
}
void studentlist::createStudent(string fn, string ln , classes *c[],double gr[],int len){
    student *temp= new student(fn,ln);
    temp->setFName(fn);
    temp->setLName(ln);
    for(int i=0;i<len;i++){
        classlist* cls = temp->getClassList();
        cls->createClass(c[i],gr[i]);
    }
    temp->setNext(NULL);
    
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setNext(temp);
        ptrend=temp;
    }
}
void studentlist::createStudent(string fn, string ln , classes * c, student * s){
    student *temp= new student(fn,ln);
    temp->setFName(fn);
    temp->setLName(ln);
    temp->setNext(NULL);
    
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setNext(temp);
        ptrend=temp;
    }
}
void studentlist::displayStudents(){
    student *temp = new student;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getInfo();
        cout<<endl;
        temp = temp->getNext();
    }
}
