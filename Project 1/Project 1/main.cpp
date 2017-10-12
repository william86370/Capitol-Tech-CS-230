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
    cout<<"enter the amount of corces this university has"<<endl;
    int len;
    cin >> len;
    for (int i = 0; i<len; i++) {
        cout<<"enter a name for  class "<<i<<" :";
        string name;
        cin >> name;
        classe->createxclass(name, NULL, NULL);
        cout<<endl;
    }
    classe->displayclasses();
    int stuc;
     cout<<"how many students are you entering ";
    cin>>stuc;
    studentlist* stulist = new studentlist;
    for(int i =0;i<stuc;i++){
        cout<<"enter a first name for student "<<i<<" :";
        string fname;
        cin >> fname;
        cout<<"enter a last name for student "<<i<<" :";
        string lname;
        cin >> lname;
        cout<<"how many classes is the student taking";
        int classc;
        cin >> classc;
        classes* classarr[classc];
        double grades[classc];
        for(int i=0;i<classc;i++){
            cout<<"enter the name of class "<<i;
            string fname;
            cin >> fname;
            int v =0;
            do{
                classarr[i] = classe->findclass(fname);
                if(classarr[i]!= NULL){
                    v=1;
                }else{
                    cout<<"the "<<i;
                }
            }while(v==0);
            classarr[i] = classe->findclass(fname);
            cout<<"enter the students grade for this class"<<i;
            double gname;
            cin >> gname;
            grades[i] = gname;
        }
        
        
        stulist->createstudent(fname, lname, NULL, NULL);
        
    }
    
    
}
