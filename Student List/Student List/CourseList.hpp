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
#include "Course.hpp"
#endif /* StudentList_hpp */
class CourseList{
private:
    Course* ptrhead;
    Course* ptrend;
    Course* ptr;
public:
    
    void createCourse(string id,string name,int cred);
    void displayCourse();
};
CourseList::CourseList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void CourseList::createCourse(string ID, string name , int cr){
    Course *temp = new Course;
    temp->setID(ID);
    temp->setname(name);
    temp->setcredits(cr);
    temp->nextCourse(NULL);
    temp->getinfo();
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->nextCourse(temp);
        ptrend=temp;
    }
}
void CourseList::displayCourse(){
    Course *temp = new Course;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getinfo();
        cout<<endl;
        temp = temp->getnextcourse();
    }
    
}



