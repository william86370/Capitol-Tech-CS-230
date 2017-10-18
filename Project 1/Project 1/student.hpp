//
//  student.hpp
//  Project 1
//Lukas Fuller, William Wright, Sharon Blankenship, Alan Morrison, Will Varner
#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include "classlist.hpp"
#endif /* student_hpp */
class student{
public:
    student();
    student(string,string);
    void setFName(string);
    void setLName(string);
    string getFName();
    string getLName();
    student* getNext();
    void setNext(student*);
    classlist* getClassList();
    void getInfo();
    void setCourse(classes*);
private:
    string fName;
    string lName;
    classlist* list;
    student* next;
};
student::student(){
    fName ="";
    lName="";
    next = NULL;
    list = new classlist;
}
student::student(string fn,string ln){
    fName = fn;
    lName = ln;
    next = NULL;
    list = new classlist;
}
void student::setFName(string fn){
    fName = fn;
}
void student::setLName(string ln ){
    lName = ln;
}
string student::getFName(){
    return fName;
}
string student::getLName(){
    return lName;
}
student* student::getNext(){
    return next;
}
void student::setNext(student* gg){
    next = gg;
}
classlist* student::getClassList(){
    return list;
}
void student::getInfo(){
    cout<<"name: "<<fName <<" "<<lName
    <<endl;
    cout<<"this student is takeing"<<endl;
    list->displayClasses();
}
