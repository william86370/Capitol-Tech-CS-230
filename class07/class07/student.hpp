//student.h
#include<fstream>
#include <iostream>
using namespace std;

class Student {
private:
    string stuID;
    string fname;
    string lname;
    int credits;
    Student* stu;
public:
    //utilities
    //fill an array of students
    Student();
    Student(string ,string ,string ,int ,Student* );
  void setID(string);
    void setname(string,string);
    void setcredits(int);
    void nextstudent(Student* stu);
    Student* getnexrstudent();
    void getinfo();
    string getfname();
     string getlname();
    string getstuid();
};
//class implamation
Student::Student(){
     stuID="";
     fname="";
     lname="";
     credits=0;
     stu=NULL;
}
string Student:: getfname(){
    return fname;
}
string Student:: getlname(){
    return fname;
}
Student::Student(string id,string fn,string ln,int cred,Student* st){
    stuID="";
    fname="";
    lname="";
    credits=0;
    stu=NULL;
}
string Student::getstuid(){
    return stuID;
}
void Student::setID(string id){
    stuID =id;
}
void Student::setname(string i, string k){
    fname = i;
    lname = k;
}
void Student::setcredits(int c){
    credits =c;
}
void Student::nextstudent(Student* su){
    stu = su;
}
Student* Student::getnexrstudent(){
    return stu;
}
void Student::getinfo(){
    cout<<"Student ID: "<<stuID<<endl;
    cout<<"Student first name is: "<<fname<<endl;
    cout<<"Student last name is: "<<lname<<endl;
    cout<<"Student credit number is: "<<credits<<endl;
}

