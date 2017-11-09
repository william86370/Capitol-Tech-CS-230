//Groceries test main file
#include<iostream>
#include<fstream>
#include"Groceries.h"
#include<stdio.h>
using namespace std;

int main()
{

ofstream outfile;

Groceries groc1,groc2,groc3;

outfile.open("groceries.dat");

if(!outfile.is_open())
{
cout<<"!!FILE NOT OPENED!!"<<endl;

}

//Grocery1
outfile<<groc1.setFoodtype("Canned");
outfile<<groc1.Calories(110);
outfile<<groc1.Expiration("02/3/19");
outfile<<groc1.Quantity(6);

//Grocery2
outfile<<groc2.setFoodtype("Fresh");
outfile<<groc2.Calories(453);
outfile<<groc2.Expiration("now");
outfile<<groc2.Quantity(1);

//Grocery3
outfile<<groc3.setFoodtype("Frozen");
outfile<<groc3.Calories(239);
outfile<<groc3.Expiration("11/7/17");
outfile<<groc3.Quantity(0);


outfile.close();

return 0;
}
