#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <cstring>
#include <string.h>
#include "Course.h"
#include "FciVector.h"
using namespace std;
 class student
 {
 private:
    string Name;
    int ID;
    string Department;
    FciVector<Course>vec;
 public:

     student()
     {
         Name="Nothing";
         ID=0;
         Department="Null";
     }
     student(const student &c)
     {
         this->Name=c.Name;
         this->ID=c.ID;
         this->Department=c.Department;
         this->vec=c.vec;
     }
     void Set_Courses(FciVector<Course>v)
     {
         vec=v;
     }
    void setName(string Name)
    {
        this->Name=Name;
    }
    string getName()
    {
        return this->Name;
    }
    void setDepartment(string Department)
    {
        this->Department=Department;
    }
    string getDepartment()
    {
        return this->Department;
    }
    void setID(int ID)
    {
        this->ID=ID;
    }
    int getID()
    {
        return this->ID;
    }

    void PrintInfo()
    {
        cout<<"Name : "<<getName()<<endl;
        cout<<"Department : "<<getDepartment()<<endl;
        cout<<"ID : "<<getID()<<endl;
        cout<<"************************************** \n";
        for(int i=0 ; i<vec.size1() ; i++)
        {
            cout<<"Course"<<i+1<<endl;
            vec[i].PrintCourseInfo();
        }
    }
    bool operator==(const student &c)/*To know the position of the new student in insert function*/
    {
    bool pass=false;
    if(this->Name==c.Name)
    {
        if(this->ID==c.ID)
        {
            if(this->Department==c.Department)
            {
                pass=true;
                return pass;
            }
            else
             return pass;
        }
        else
           return pass;
    }
    else
        return pass;
    }
 };


#endif // STUDENT_H_INCLUDED
