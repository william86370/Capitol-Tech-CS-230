//Movie test main file
#ifndef Movie_testfile_cpp
#define Movie_testfile_cpp
#include<iostream>
#include<fstream>
#include"Movies.h"
#include<stdio.h>
#endif
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
mov1.setTitle("Lion King");

mov1.setYear(1994);

mov1.setFormat("VHS");

mov1.setDirector("Benny Reese");
                            
mov1.setRating(5.0);

mov1.Numcopies(3);

//Movie 2
mov2.setTitle("The Kingsman");

mov2.setYear(2013);

mov2.setFormat("Digital");

mov2.setDirector("Tarantino");

mov2.setRating(3.5);

mov2.Numcopies(1);

//Movie 3
mov3.setTitle("Thor: Raganarok");

mov3.setYear(2017);

mov3.setFormat("Digital");

mov3.setDirector("Michael Jackson");

mov3.setRating(2.0);

mov3.Numcopies(20);

outfile.close();

return 0;
}

