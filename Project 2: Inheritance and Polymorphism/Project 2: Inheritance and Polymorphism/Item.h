//
//  Food.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/2/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//


#ifndef Item_h
#define Item_h
#include <stdio.h>
#include <iostream>
#endif
using namespace std;
class item{
private:
    string name;
    double price;
public:
    item(string,double);
    string getname();
    double getprice();
};
item::item(string nameh,double pricei){
    name = nameh;
    price = pricei;
}
string item::getname(){
    return name;
}
double item::getprice(){
    return price;
}
