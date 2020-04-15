#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class Course
{
private:
    string CourseName;
    string CourseCode;
    char CourseGrade;
    float CoursePoint;
    int CourseYear;
    int CourseSemester;
public:
    Course()
    {
        CourseName="Nothing";
        CourseCode="Nothing";
        CourseGrade='0';
        CoursePoint=0;
        CourseYear=0;
        CourseSemester=0;
    }
    void setCourseName(string CourseName)
    {
        this->CourseName=CourseName;
    }
    string getCourseName()
    {
        return this->CourseName;
    }
     void setCourseCode(string CourseCode)
    {
        this->CourseCode=CourseCode;
    }
    string getCourseCode()
    {
        return this->CourseCode;
    }
     void setCourseGrade(char CourseGrade)
    {
        this->CourseGrade=CourseGrade;
    }
   char getCourseGrade()
    {
        return this->CourseGrade;
    }
     void setCoursePoint(float CoursePoint)
    {
        this->CoursePoint=CoursePoint;
    }
    float getCoursepoint()
    {
        return this->CoursePoint;
    }
     void setCourseYear(int CourseYear)
    {
        this->CourseYear=CourseYear;
    }
    int getCourseYear()
    {
        return this->CourseYear;
    }
     void setCourseSemester(int CourseSemester)
    {
        this->CourseSemester=CourseSemester;
    }
    int getCourseSemster()
    {
        return this->CourseSemester;
    }
    void PrintCourseInfo()
    {
        cout<<"CourseName: "<<CourseName<<endl;
        cout<<"CourseCode: "<<CourseCode<<endl;
        cout<<"CourseGrade: "<<CourseGrade<<endl;
        cout<<"CoursePoint: "<<CoursePoint<<endl;
        cout<<"CourseYear: "<<CourseYear<<endl;
        cout<<"CourseSemester: "<<CourseSemester<<endl;
    }
};


#endif // COURSE_H_INCLUDED
