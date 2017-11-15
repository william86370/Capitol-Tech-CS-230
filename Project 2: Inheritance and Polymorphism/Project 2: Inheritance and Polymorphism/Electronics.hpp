
#ifndef Electronics_hpp
#define Electronics_hpp

#include <stdio.h>
#include "Item.hpp"
 /* Electronics_hpp */
 #endif
using namespace std;

class Electronics : public item{
private:
	string brandName;
	string modelNum;
    string type;
public:
	Electronics();
	void setType(string t);
	void setbrandName(string m);
	void setmodelNum(string b);
	string gettype();
	string getmodelNum();
	string getbrandName();
	void printItem();


};
Electronics::Electronics()
{
	item();
	type="";
}
void Electronics::setType(string t)
{
	type = t;
}
void Electronics::setmodelNum(string m)
{
	modelNum = m;
}
void Electronics::setbrandName(string b)
{
	brandName = b;
}
string Electronics::getbrandName()
{
	return brandName;
}
string Electronics::getmodelNum()
{
	return modelNum;
}
string Electronics::gettype()
{
	return type;
}
void Electronics::printItem()
{
	cout <<"Type: "<<type<<endl
		 <<"Model Number: "<<modelNum<<endl
		 <<"Brand: "<<brandName<<endl;
}
