//
//  classes.hpp
//  Project 1
//Lukas Fuller, William Wright, Sharon Blankenship, Alan Morrison, Will Varner
#ifndef classes_hpp
#define classes_hpp

#include <stdio.h>
using namespace std;
#endif /* classes_hpp */
class classes{
private:
    string name;
    double grade;
    classes* next;
public:
    classes();
    classes(string,double,classes*);
    string getName();
    double getGrade();
    void setName(string);
    void setGrade(double);
    void setNext(classes*);
    classes* getNext();
    void getInfo();
};
classes::classes(){
    name ="";
    grade = 0;
    next = NULL;
}
classes::classes(string name2,double grade2,classes* CL){
    name = name2;
    grade = grade2;
    next = CL;
}
string classes::getName(){
    return name;
}
double classes::getGrade(){
    return grade;
}
void classes::setName(string inn){
    name = inn;
}
void classes::setGrade(double gg){
    grade = gg;
}
void classes::setNext(classes* ne){
    next = ne;
}
classes* classes::getNext(){
    return next;
}
void classes::getInfo(){
    cout << "class: "<<name;
    cout<< "grade: "<<grade;
}
