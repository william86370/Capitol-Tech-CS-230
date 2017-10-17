//
//  main.cpp
//  Project 1
//
//  Created by william wright on 10/10/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#include <iostream>
#include "studentlist.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    
    classlist* classe = new classlist;
    cout<<"Enter the amount of courses this university has: ";
    int len;
    cin >> len;
    for (int i = 0; i<len; i++) {
        cout<<endl<<"Enter a name for class "<<(i+1)<<":";
        string name;
        cin >> name;
        classe->createxclass(name, NULL, NULL);
        
    }
    classe->displayClasses();
    int stuc;
     cout<<"How many students are you entering? ";
    cin>>stuc;
    studentlist* stulist = new studentlist;
    for(int i =0;i<stuc;i++){
        cout<<"Enter a first name for student "<<(i+1)<<" :";
        string fName;
        cin >> fName;
        cout<<"Enter a last name for student "<<(i+1)<<" :";
        string lName;
        cin >> lName;
        cout<<"How many classes is the student taking? ";
        int classc;
        cin >> classc;
        classes* classarr[classc];
        double grades[classc];
        for(int i=0;i<classc;i++){
            int v =0;
            do{
                cout<<"Enter the name of class "<<(i+1)<<": ";
                string fName;
                cin >> fName;
                v=0;
                classarr[i] = classe->findClass(fName);
                if(classarr[i]!= NULL){
                    v=1;
                }else{
                    cout<<"The class you entered dosent exist"<<endl;
                }
            }while(v==0);
           
            cout<<"Enter the students grade for class: "<< (i+1);
            double gname;
            cin >> gname;
            grades[i] = gname;
        }
        
        
        stulist->createStudent(fName, lName, classarr, grades,classc);
        
    }
    stulist->displayStudents();
    
}
