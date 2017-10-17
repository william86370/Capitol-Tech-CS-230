//
//  classlist.hpp
//  Project 1

#ifndef classlist_hpp
#define classlist_hpp
#include "classes.hpp"
#include <stdio.h>

#endif /* classlist_hpp */
class classlist{
private:
    classes* ptrhead;
    classes* ptrend;
    classes* ptr;
public:
    classlist();
    void createxclass(string,double,classes*);
    void displayClasses();
    void createClass(classes*);
    void createClass(classes*,double);
    classes* findClass(string);
};
classlist::classlist(){
    ptrhead = NULL;
    ptrend = NULL;
}
classes* classlist::findClass(string find){
    ptr = ptrhead;
    while(ptr->getNext()!= NULL){
        cout<<ptr->getName();
        if(ptr->getName()==find){
            return ptr;
        }else{
            ptr = ptr->getNext();
        }
    }
    if(ptr->getNext()== NULL){
        cout<<ptr->getName();
        if(ptr->getName()==find){
            return ptr;
        }
    }
    return NULL;
}
void classlist::createClass(classes* cl,double gr){
    classes* temp = new classes;
    temp->setName(cl->getName());
    temp->setGrade(gr);
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
void classlist::createClass(classes* cl){
    classes* temp = new classes;
    temp->setGrade(cl->getGrade());
    temp->setName(cl->getName());
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
void classlist::createxclass(string name, double grade, classes* cl){
    classes *temp= new classes(name,grade,cl);
    temp->setName(name);
    temp->setGrade(grade);
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
void classlist::displayClasses(){
    classes *temp = new classes;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getInfo();
        cout<<endl;
        temp = temp->getNext();
    }
}
