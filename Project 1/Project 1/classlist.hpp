//
//  classlist.hpp
//  Project 1
//
//  Created by william wright on 10/10/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

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
    void displayclasses();
    void createclass(classes*);
    classes* findclass(string);
};
classlist::classlist(){
    ptrhead = NULL;
    ptrend = NULL;
}
classes* classlist::findclass(string find){
    ptr = ptrhead;
    while(ptr->getnext()!= NULL){
        if(ptr->getname()==find){
            return ptr;
        }else{
            ptr = ptr->getnext();
        }
    }
    return NULL;
}
void classlist::createclass(classes* cl){
    classes* temp = new classes;
    temp->setgrade(cl->getgrade());
    temp->setname(cl->getname());
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
void classlist::createxclass(string name, double grade, classes* cl){
    classes *temp= new classes(name,grade,cl);
    temp->setname(name);
    temp->setgrade(grade);
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
void classlist::displayclasses(){
    classes *temp = new classes;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getinfo();
        cout<<endl;
        temp = temp->getnext();
    }
}
