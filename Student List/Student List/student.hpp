//Student.h
#include<fstream>
#include <iostream>
using namespace std;

class Student {
private:
    string stuID;
    string fName;
    string lName;
    int credits;
    Student* stu;
public:
    //utilities
    //fill an array of Students
    Student();
    Student(string ,string ,string ,int ,Student* );
  void setID(string);
    void setName(string,string);
    void setcredits(int);
    void nextStudent(Student* stu);
    Student* getnexrStudent();
    void getInfo();
    string getFName();
     string getlname();
    string getstuid();
};
//class implamation
Student::Student(){
     stuID="";
     fName="";
     lName="";
     credits=0;
     stu=NULL;
}
string Student:: getFName(){
    return fName;
}
string Student:: getlname(){
    return fName;
}
Student::Student(string id,string fn,string ln,int cred,Student* st){
    stuID="";
    fName="";
    lName="";
    credits=0;
    stu=NULL;
    cout<<"Student ID: "<<stuID<<endl;
    cout<<"Student first name is: "<<fName<<endl;
    cout<<"Student last name is: "<<lName<<endl;
    cout<<"Student credit number is: "<<credits<<endl;
}
string Student::getstuid(){
    return stuID;
}
void Student::setID(string id){
    stuID =id;
}
void Student::setName(string i, string k){
    fName = i;
    lName = k;
}
void Student::setcredits(int c){
    credits =c;
}
void Student::nextStudent(Student* su){
    stu = su;
}
Student* Student::getnexrStudent(){
    return stu;
}
void Student::getInfo(){
    cout<<"Student ID: "<<stuID<<endl;
    cout<<"Student first name is: "<<fName<<endl;
    cout<<"Student last name is: "<<lName<<endl;
    cout<<"Student credit number is: "<<credits<<endl;
}

