//
//  classes.hpp
//  Project 1
//
//  Created by william wright on 10/10/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

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
    string getname();
    double getgrade();
    void setname(string);
    void setgrade(double);
    void setnext(classes*);
    classes* getnext();
    void getinfo();
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
string classes::getname(){
    return name;
}
double classes::getgrade(){
    return grade;
}
void classes::setname(string inn){
    name = inn;
}
void classes::setgrade(double gg){
    grade = gg;
}
void classes::setnext(classes* ne){
    next = ne;
}
classes* classes::getnext(){
    return next;
}
void classes::getinfo(){
    cout << "class: "<<name;
    if(grade!= NULL){
         cout<< "grade: "<<grade;
    }
   
}
