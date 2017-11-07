//Movies header file w/implementation
//Movies is derived class of Item
#ifndef Movies_h
#define Movies_h
#include<iostream>
#endif
using namespace std;

class Movie //class Movie,public Item
{
private:
	
	float rating;
	int copy;
	int year;
	string title;
	string format;//dvd,digital,vhs
	string director;

public:
	 //Movie:Item();
	  Movie();
	 /*
	 getter functions pull data from private members
	 setter functions assign values to private members
	 setters used here cuz data will be read from separate file
	 file will be like record that can't be changed by customer,so
	 setters restrict data change
	 */
	 void setRating(float);
	 void Numcopies(int);
	 void setYear(int);
	 void setTitle(string);
	 void setFormat(string);
	 void setDirector(string);
};

// Movie Header Implementation

Movie::Movie()
{

string title=" ";
string format=" ";
string director=" ";
float rating=0.0;
int Numcopy=0;
int year=0;
}

void Movie::setYear(int y)
{
year=y;
}

void Movie::setRating(float r)
{
rating=r;
}

void Movie::setTitle(string t)
{
title = t;
}

void Movie::setFormat(string f)
{
format = f;
}

void Movie::setDirector(string d)
{
director = d;
}

void Movie::Numcopies(int c)
{
copy=c;
}
