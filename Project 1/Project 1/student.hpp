//
//  student.hpp
//  Project 1
//
//  Created by william wright on 10/10/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include "classlist.hpp"
#endif /* student_hpp */
class student{
public:
    student();
    student(string,string);
    void setfname(string);
    void setlname(string);
    string getfname();
    string getlastname();
    student* getnext();
    void setnext(student*);
    classlist* getclasslist();
    void getinfo();
    void setgrade(double,string);
    void setcorce(classes*);
private:
    string fname;
    string lname;
    classlist* list;
    student* next;
};
student::student(){
    fname =""; 
    lname="";
    next = NULL;
    list = new classlist;
}
student::student(string fn,string ln){
    fname = fn;
    lname = ln;
    next = NULL;
    list = new classlist;
}
void student::setfname(string fn){
    fname = fn;
}
void student::setlname(string ln ){
    lname = ln;
}
string student::getfname(){
    return fname;
}
string student::getlastname(){
    return lname;
}
student* student::getnext(){
    return next;
}
void student::setnext(student* gg){
    next = gg;
}
classlist* student::getclasslist(){
    return list;
}
void student::getinfo(){
    cout<<"name: "<<fname <<" "<<lname
    <<endl;
    cout<<"this student is takeing"<<endl;
    list->displayclasses();
}
void student::setgrade(double gr,string name){
    
}
