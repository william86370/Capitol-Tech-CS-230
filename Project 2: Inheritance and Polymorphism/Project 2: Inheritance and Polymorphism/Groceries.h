//this is Groceries header and implementation
//derived class of Item
#include<iostream>
using namespace std;

class Groceries//, public Item
{
	
private:
	string type;//type of food
	string expiration;//expiration date
	int calorie;
	int quantity;

public:
	Groceries();
	string setFoodtype(string);//choice between fresh,canned,and frozen
    void Expiration(string);//expiration date
    void Calories(int);
    void Quantity(int);
};
// Groceries header implementation

Groceries::Groceries()
{

string type="";
string expiration="";
int calorie=0;
int quantity=0;

}

string Groceries::setFoodtype(string f)
{
type=f;

}

void Groceries::Expiration(string e)
{

expiration=e;

}

void Groceries::Calories(int c)
{

calorie=c;

}

void Groceries::Quantity(int q)
{

quantity=q;

}
