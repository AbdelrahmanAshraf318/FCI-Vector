#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <string.h>
#include "FciVector.h"
#include "Student.h"
#include "Course.h"
using namespace std;

FciVector<student>v1;//for student
FciVector<int>v2;//for integers
FciVector<float>v3;//for float
FciVector<char>v4;//for character
FciVector<string>v5;//for Strings
//Will take the type of FciVector in main

//Name:Abdelrahman Ashraf Mohamed
//ID:20180150
//Group:11

student CreateStudent()
{
    student obj;
    string Name , Department;
       string CourseCode;
    char CourseGrade;
    float CoursePoint;
    int CourseYear;
    int CourseSemester;
    FciVector <Course> scourse;
     string CourseName;
    int ID;
    int counter=0;
    int NumofCourse;
    cin.sync();
    cin.clear();
    cout<<"Enter Name: ";
    getline(cin,Name);
    obj.setName(Name);
     cin.sync();
    cin.clear();
    cout<<"Enter Department: ";
    getline(cin,Department);
    obj.setDepartment(Department);
    cout<<"Enter ID: ";
    cin>>ID;
    obj.setID(ID);
    cout<<"Enter Number of courses:";
    cin>>NumofCourse;
    for(int j=0 ; j<NumofCourse ; j++)
    {
        Course ob;
        cout<<"Enter course #"<<j+1<<" info\n";


     cin.sync();
    cin.clear();
    cout<<"Enter CourseName: ";
    getline(cin,CourseName);
    ob.setCourseName(CourseName);
    cout<<"Enter CourseCode: ";
    cin>>CourseCode;
    ob.setCourseCode(CourseCode);
    cout<<"Enter CourseGrade: ";
    cin>>CourseGrade;
    ob.setCourseGrade(CourseGrade);
    cout<<"Enter CoursePoint: ";
    cin>>CoursePoint;
    ob.setCoursePoint(CoursePoint);
    cout<<"Enter CourseYear: ";
    cin>>CourseYear;
    ob.setCourseYear(CourseYear);
    cout<<"Enter CourseSemester: ";
    cin>>CourseSemester;
    ob.setCourseSemester(CourseSemester);
    scourse.Push_Back(ob);
    obj.Set_Courses(scourse);
           }
           return obj;
}

int main()
{
    string answer;
    do
    {
        smallMenu://Use it if the user enter invalid choice
            int choose;//to choose from the small menu
    cout<<"Insert type of vector you would like to create: \n";
    cout<<"1. list of integer \n";
    cout<<"2. list of character \n";
    cout<<"3. list of string \n";
    cout<<"4. list of float \n";
    cout<<"5. list of students \n";
    cout<<"6. Exit \n";
    cin>>choose;
    if(choose==1)
    {
        cout<<"A vector of integers was created successfully\n";
    }
    else if(choose==2)
    {
        cout<<"A vector of characters was created successfully\n";
    }
    else if(choose==3)
    {
        cout<<"A vector of string was created successfully\n";
    }
    else if(choose==4)
    {
        cout<<"A vector of float was created successfully\n";
    }
    else if(choose==5)
    {
        cout<<"A vector of student was created successfully\n";
    }
    else if(choose==6)
    {
        cout<<"Thanks for using my program\n";
        break;
    }
    else
    {
        cout<<"Invalid Input, please Try Again\n";
        goto smallMenu;
    }
    do
    {
        int choose1;//to choose from the second
   cout<<"What kind of operation would you like to perform? \n";
   cout<<"1. Add element \n";
   cout<<"2. Remove last element\n";
   cout<<"3. Insert element at certain position\n";
   cout<<"4. Erase element from a certain position\n";
   cout<<"5. Clear\n";
   cout<<"6. Display first element\n";
   cout<<"7. Display last element\n";
   cout<<"8. Display element at certain position\n";
   cout<<"9. Display vector size\n";
   cout<<"10. Display vector capacity\n";
   cout<<"11. Is empty?\n";
   cin>>choose1;
   int NumOFElements;
   if(choose1==1)
   {
       if(choose==1)
       {
           cout<<"How many elements you would like to add?\n";
           cin>>NumOFElements;
           int ele;//to take elements
           for(int i=0 ; i<NumOFElements ; i++)
           {
               cout<<"Enter element #"<<i+1<<endl;
               cin>>ele;
               v2.Push_Back(ele);
           }
       }
       else if(choose==2)
       {
           cout<<"How many elements you would like to add?\n";
           cin>>NumOFElements;
           char ele;//to take elements
           for(int i=0 ; i<NumOFElements ; i++)
           {
               cout<<"Enter element #"<<i+1<<endl;
               cin>>ele;
               v4.Push_Back(ele);
           }
       }
       else if(choose==3)
       {
           cout<<"How many elements you would like to add?\n";
           cin>>NumOFElements;
           string ele;//to take elements
           for(int i=0 ; i<NumOFElements ; i++)
           {
               cout<<"Enter element #"<<i+1<<endl;
               cin.clear();
               cin.sync();
               getline(cin , ele);
               v5.Push_Back(ele);
           }
       }
       else if(choose==4)
       {
           cout<<"How many elements you would like to add?\n";
           cin>>NumOFElements;
           float ele;//to take elements
           for(int i=0 ; i<NumOFElements ; i++)
           {
               cout<<"Enter element #"<<i+1<<endl;
               cin>>ele;
               v3.Push_Back(ele);
           }
       }
       else if(choose==5)
       {
            cout<<"How many elements you would like to add?\n";
           cin>>NumOFElements;
           student obj;//to take elements
           for(int i=0 ; i<NumOFElements ; i++)
           {
               cout<<"Student #"<<i+1<<endl;
               obj=CreateStudent();
               v1.Push_Back(obj);
           }

       }
   }
   else if(choose1==2)
   {
       if(choose==1)
       {
           v2.PopBack();
       }
       else if(choose==2)
       {
           v4.PopBack();
       }
       else if(choose==3)
       {
           v5.PopBack();
       }
       else if(choose==4)
       {
           v3.PopBack();
       }
       else if(choose==5)
       {
           v1.PopBack();
       }
   }
   else if(choose1==3)
   {
       if(choose==1)
       {
           cout<<"Enter the position you want to insert: ";
           int num , index;
           cin>>index;
           index-=1;
           cout<<"Enter the value you want to insert: ";
           cin>>num;
           v2.Insert(v2.Begin()+index , num);
           cout<<"The New Vector: \n";
           for(int i=0 ; i<v2.size1() ; i++)
           {
               cout<<v2[i]<<endl;
           }
       }
       else if(choose==2)
       {
           cout<<"Enter the position you want to insert: ";
           int index;
           cin>>index;
           index-=1;
           char num;
           cout<<"Enter the value you want to insert: ";
           cin>>num;
           v4.Insert(v4.Begin()+index , num);
           cout<<"The New Vector: \n";
           for(int i=0 ; i<v4.size1() ; i++)
           {
               cout<<v4[i]<<endl;
           }
       }
       else if(choose==3)
       {
           cout<<"Enter the position you want to insert: ";
           int  index;
           cin>>index;
           index-=1;
           string str;
           cout<<"Enter the value you want to insert: ";
           cin.sync();
           cin.clear();
           getline(cin,str);
           v5.Insert(v5.Begin()+index , str);
           cout<<"The New Vector: \n";
           for(int i=0 ; i<v5.size1() ; i++)
           {
               cout<<v5[i]<<endl;
           }
       }
       else if(choose==4)
       {
           cout<<"Enter the position you want to insert: ";
           int  index;
           cin>>index;
           index-=1;
           float num;
           cout<<"Enter the value you want to insert: ";
           cin>>num;
           v3.Insert(v3.Begin()+index , num);
           cout<<"The New Vector: \n";
           for(int i=0 ; i<v3.size1() ; i++)
           {
               cout<<v3[i]<<endl;
           }
       }
       else if(choose==5)
       {
           int pos;
           cout<<"Enter the position you want to insert: ";
           cin>>pos;
           pos-=1;
           cout<<"The studentData: \n";
           student obj=CreateStudent();
           v1.Insert(v1.Begin()+pos , obj);
           cout<<"The New Vector: \n";
          for(int i=0 ; i<v1.size1() ; i++)
           {
               v1[i].PrintInfo();
               cout<<"************************************* \n";
           }
       }
   }
   else if(choose1==4)
   {
       if(choose==1)
       {
           int pos;
           cout<<"Enter the position of the element you want to erase: ";
           cin>>pos;
           int *ptr = &pos;
           v2.Erase(ptr);
       }
       else if(choose==2)
       {
           int pos;
           cout<<"Enter the position of the element you want to erase: ";
           cin>>pos;
           int *ptr = &pos;
           v4.Erase(ptr);
       }
       else if(choose==3)
       {
           int pos;
           cout<<"Enter the position of the element you want to erase: ";
           cin>>pos;
           int *ptr = &pos;
           v5.Erase(ptr);
       }
       else if(choose==4)
       {
           int pos;
           cout<<"Enter the position of the element you want to erase: ";
           cin>>pos;
           int *ptr = &pos;
           v3.Erase(ptr);
       }
       else if(choose==5)
       {
           int pos;
           cout<<"Enter the position of the element you want to erase: ";
           cin>>pos;
           int *ptr = &pos;
           v1.Erase(ptr);
       }
   }
   else if(choose1==5)
   {
       if(choose==1)
       {
           v2.Clear();
           cout<<"The vector is cleared\n";
       }
       else if(choose==2)
       {
           v4.Clear();
           cout<<"The vector is cleared\n";
       }
       else if(choose==3)
       {
           v5.Clear();
           cout<<"The vector is cleared\n";
       }
       else if(choose==4)
       {
           v3.Clear();
           cout<<"The vector is cleared\n";
       }
       else if(choose==5)
       {
           v1.Clear();
           cout<<"The vector is cleared\n";
       }
   }
   else if(choose1==6)
   {
        if(choose==1)
       {
          if(v2.size1()==0)
          {
              cout<<"The vector is empty\n";
          }
          else
          {
              int x=v2.front1();
          cout<<"The first element: "<<x<<endl;
          }
       }
       else if(choose==2)
       {
           if(v4.size1()==0)
          {
              cout<<"The vector is empty\n";
          }
          else
          {
              char x=v4.front1();
          cout<<"The first element: "<<x<<endl;
          }
       }
       else if(choose==3)
       {
           if(v5.size1()==0)
          {
              cout<<"The vector is empty\n";
          }
          else
          {
              string x=v5.front1();
          cout<<"The first element: "<<x<<endl;
          }
       }
       else if(choose==4)
       {
           if(v3.size1()==0)
          {
              cout<<"The vector is empty\n";
          }
          else
          {
              float x=v3.front1();
          cout<<"The first element: "<<x<<endl;
          }
       }
       else if(choose==5)
       {

           if(v1.size1()==0)
          {
              cout<<"The vector is empty\n";
          }
          else
          {
              student obj=v1.front1();
           cout<<"The first student is\n";
           obj.PrintInfo();
          }
       }
   }
   else if(choose1==7)
   {

        if(choose==1)
       {
          int Back=v2.back1();
          cout<<"The last element: "<<Back<<endl;
       }
       else if(choose==2)
       {
           char Back=v4.back1();
           cout<<"The last element: "<<Back<<endl;
       }
       else if(choose==3)
       {
           string Back=v5.back1();
           cout<<"The last element: "<<Back<<endl;
       }
       else if(choose==4)
       {
           float Back=v3.back1();
           cout<<"The last element: "<<Back<<endl;
       }
       else if(choose==5)
       {
           student Back=v1.back1();
           cout<<"The last student is \n";
           Back.PrintInfo();
       }
   }
   else if(choose1==8)
   {
       if(choose==1)
       {
           int ele;
          cout<<"Enter the index of the element you want to print it: ";
          cin>>ele;
          ele-=1;
          cout<<"The element: "<<v2[ele]<<endl;
       }
       else if(choose==2)
       {
            int ele;
          cout<<"Enter the index of the element you want to print it: ";
          cin>>ele;
          ele-=1;
          cout<<"The element: "<<v4[ele]<<endl;
       }
       else if(choose==3)
       {
            int ele;
          cout<<"Enter the index of the element you want to print it: ";
          cin>>ele;
          ele-=1;
          cout<<"The element: "<<v5[ele]<<endl;
       }
       else if(choose==4)
       {
            int ele;
          cout<<"Enter the index of the element you want to print it: ";
          cin>>ele;
          ele-=1;
          cout<<"The element: "<<v3[ele]<<endl;
       }
       else if(choose==5)
       {
            int ele;
          cout<<"Enter the index of the element you want to print it: ";
          cin>>ele;
          ele-=1;
          cout<<"The Student: \n";
          v1[ele].PrintInfo();
       }
   }
   else if(choose1==9)
   {
       if(choose==1)
       {
          cout<<"The size of vector: "<<v2.size1()<<endl;
       }
       else if(choose==2)
       {
            cout<<"The size of vector: "<<v4.size1()<<endl;
       }
       else if(choose==3)
       {
          cout<<"The size of vector: "<<v5.size1()<<endl;
       }
       else if(choose==4)
       {
           cout<<"The size of vector: "<<v3.size1()<<endl;
       }
       else if(choose==5)
       {
            cout<<"The size of vector: "<<v1.size1()<<endl;
       }
   }
   else if(choose1==10)
   {
       if(choose==1)
       {
          cout<<"The capacity of vector: "<<v2.get_capacity()<<endl;
       }
       else if(choose==2)
       {
            cout<<"The capacity of vector: "<<v4.get_capacity()<<endl;
       }
       else if(choose==3)
       {
          cout<<"The capacity of vector: "<<v5.get_capacity()<<endl;
       }
       else if(choose==4)
       {
           cout<<"The capacity of vector: "<<v3.get_capacity()<<endl;
       }
       else if(choose==5)
       {
            cout<<"The capacity of vector: "<<v1.get_capacity()<<endl;
       }
   }
   else if(choose1==11)
   {
       if(choose==1)
       {
          bool passed=true;
          passed&=v2.empty1();
          if(passed)
          {
              cout<<"The vector is empty \n";
          }
          else
            cout<<"The vector is not empty\n";
       }
       else if(choose==2)
       {
            bool passed=true;
          passed&=v4.empty1();
          if(passed)
          {
              cout<<"The vector is empty \n";
          }
          else
            cout<<"The vector is not empty\n";
       }
       else if(choose==3)
       {
          bool passed=true;
          passed&=v5.empty1();
          if(passed)
          {
              cout<<"The vector is empty \n";
          }
          else
            cout<<"The vector is not empty\n";
       }
       else if(choose==4)
       {
           bool passed=true;
          passed&=v3.empty1();
          if(passed)
          {
              cout<<"The vector is empty \n";
          }
          else
            cout<<"The vector is not empty\n";
       }
       else if(choose==5)
       {
           bool passed=true;
          passed&=v1.empty1();
          if(passed)
          {
              cout<<"The vector is empty \n";
          }
          else
            cout<<"The vector is not empty\n";
       }
   }
     cout<<"Do you want to do another operation?\n";
   cin>>answer;
    }while(answer=="Yes"||answer=="yes");

}while(true);

        return 0;
}
