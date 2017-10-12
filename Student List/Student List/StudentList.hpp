//
//  StudentList.hpp
//  Student List
//
//  Created by william wright on 9/28/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef StudentList_hpp
#define StudentList_hpp

#include <stdio.h>
#include "student.hpp"

#endif /* StudentList_hpp */
class StudentList{
private:
Student* ptrhead;
Student* ptrend;
Student* ptr;
public:
    StudentList();
void createStudent(string id,string fn,string ln,int cred);
void displayStudent();
};
StudentList::StudentList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void StudentList::createStudent(string ID, string FN, string LN , int cr){
    Student *temp = new Student;
    temp->setID(ID);
    temp->setname(FN, LN);
    temp->setcredits(cr);
    temp->nextStudent(NULL);
     temp->getinfo();
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->nextStudent(temp);
        ptrend=temp;
    }
}
void StudentList::displayStudent(){
    Student *temp = new Student;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getinfo();
        cout<<endl;
        temp = temp->getnexrStudent();
    }
    
}


