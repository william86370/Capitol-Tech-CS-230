//
//  main.cpp
//  class07
//
//  Created by william wright on 9/19/17.
//  Copyright © 2017 william wright. All rights reserved.
//

#include <iostream>
#include "list.hpp"
using namespace std;
int menu(){
    int option;
    cout <<"Main menu\n"
    <<"==========\n"
    <<"1.) Add a new student\n"
    <<"2.) find specific student\n"
    <<"3.) sort bb\n"
    <<"4.) view all students\n"
    <<"5.) exit program\n"
    <<"enter your coice: ";
    cin >> option;
    return option;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    List *studentlist = new List();
    Student* temp;
    int option;
    do{
        option = menu();
    switch(option){
        case 1:{
            string tempn;
            string templ;
            string tempID;
            int tempcred;
            
            cout<<"enter student ID"<<endl;
            cin>>tempID;
             cout<<"enter student first name"<<endl;
            cin>> tempn;
             cout<<"enter student last name"<<endl;
            cin>> templ;
             cout<<"enter student credits"<<endl;
            cin>> tempcred;
            studentlist->createstudent(tempID,tempn,templ,tempcred);
            break;
        }case 2:{
            int option;
           cout<<"Search Menu"<<endl;
           cout<<"==========="<<endl;
            cout<<"1.) search by name"<<endl;
            cout<<"2.) search by student ID"<<endl;
            cin >> option;
            if(option ==1){
                int option;
                
                cout<<"Search Menu"<<endl;
                cout<<"==========="<<endl;
                cout<<"1.) search by first name"<<endl;
                cout<<"2.) search by last name"<<endl;
                cin >> option;
                if (option ==1){
                    string name;
                    cout<<"enter a first name"<<endl;
                    cin >> name;
                   temp = studentlist->searchbyfname(name);
                    if(temp==NULL){
                        cout<<"the student your searching for dosent exist"<<endl;
                    }else{
                         temp->getinfo();
                    }
                }else{
                    string name;
                    cout<<"enter a last name"<<endl;
                    cin >> name;
                  temp = studentlist->searchbylname(name);
                    if(temp==NULL){
                        cout<<"the student your searching for dosent exist"<<endl;
                    }else{
                        temp->getinfo();
                    }
                }
            }else{
                
                
                
            }
            
            
            break;
        }case 3:{
            studentlist->sortstudents();
            
            
            
             
            
            break;
        }
        case 4:{
            studentlist->displaystudent();
            break;
        }
            
    }
       
        
    }while(option != 5);
     return 0;
}

