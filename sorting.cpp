#include "sorting.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include<string>
#include <sstream>
using namespace std;

sorting::sorting()
{
    //ctor
}

sorting::~sorting()
{
    //dtor
}
void sorting::bubbleSort()
{
    int i=0,j=0,n=100;
    string name[n];
    fstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile,name[i]);
        i++;
    }
    for(i=0; i<n-1; i++)
        {
            for(j = i+1; j<n; j++)
                {
                    if(name[i]>name[j])
                    {
                              swap(name[i],name[j]);
                    }
                }
        }
       for (i =0; i<n; i++)
       cout<<name[i]<<endl;
       myfile.close();
}
void sorting::insertionSort()
{
    int i=0,j=0,n=100;
    string name[n];
    fstream myfile;
    myfile.open("top_passwords.txt");
    while(myfile.good())
    {
        getline(myfile,name[i]);
        i++;
    }
      for(i=1;i<n;i++)
    {
        string key = name[i];
         j=i-1;
        while(j>=0&&name[j]>key)
        {
            name[j+1]=name[j];
             j=j-1;
        }
        name[j+1]=key;
    }
    for ( int a=0;a<n;a++)
    {
        cout<<name[a]<<endl;
    }

       myfile.close();
}
void sorting::load()
{
    bubbleSort();
    insertionSort();
}
