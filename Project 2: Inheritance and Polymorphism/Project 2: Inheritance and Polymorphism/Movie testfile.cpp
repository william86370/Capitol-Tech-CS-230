//Movie test main file
#include<iostream>
#include<fstream>
#include"Movies.h"
#include<stdio.h>
using namespace std;

int main()
{
ofstream outfile;//writing TO a file

int i;

Movie mov1,mov2,mov3;  //,mov2,mov3; //declares 3 instances of movie class object

outfile.open("movies.dat");

if(!outfile.is_open())
{
cout<<"!!FILE NOT OPENED!!"<<endl;
}

//Movie 1
outfile<<mov1.setTitle("Lion King");

outfile<<mov1.setYear(1994);

outfile<<mov1.setFormat("VHS");

outfile<<mov1.setDirector("Benny Reese");
                            
outfile<<mov1.setRating(5.0);

outfile<<mov1.Numcopies(3);

//Movie 2
outfile<<mov2.setTitle("The Kingsman");

outfile<<mov2.setYear(2013);

outfile<<mov2.setFormat("Digital");

outfile<<mov2.setDirector("Tarantino");

outfile<<mov2.setRating(3.5);

outfile<<mov2.Numcopies(1);

//Movie 3
outfile<<mov3.setTitle("Thor: Raganarok");

outfile<<mov3.setYear(2017);

outfile<<mov3.setFormat("Digital");

outfile<<mov3.setDirector("Michael Jackson");

outfile<<mov3.setRating(2.0);

outfile<<mov3.Numcopies(20);

outfile.close();

return 0;
}

