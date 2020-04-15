#ifndef FCIVECTOR_H_INCLUDED
#define FCIVECTOR_H_INCLUDED

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

template <class T>

class FciVector
{
private:
    T *elements;
    int  numberOfElements;
    int capacity;
public:
    FciVector()
        {
            elements=new T[1];
            capacity=1;
            numberOfElements=0;
        }
        //////////////////////////////
    int size1()
    {
        return this->numberOfElements;
    }
    /////////////////////////////
    int get_capacity()
    {
        return this->capacity;
    }
    ////////////////////////////////////
    bool empty1()
    {
        if(size1()==0)
        {
            return true;
        }
        else
            return false;
    }
    //////////////////////////////////
    T &operator[](int index)
    {
       return elements[index];
    }
    ////////////////////////////////
    T *Begin()
    {
        return &elements[0];
    }
    ////////////////////////////////////////
    T &back1()
    {
        return elements[size1()-1];
    }
    T &front1()
    {
        return elements[0];
    }
    void Insert(T *position , T val)
    {
       if(capacity<=numberOfElements)
       {
           capacity*=2;//to increase the size of the new vector
       }
        T *NewElements = new T[capacity];
        for(int i=0 ; i<size1() ; i++)
        {
            if(*position==elements[i])
            {
                int k=0;//To count the new size of the temperor vector
                for(int j=0 ; j<numberOfElements ; j++)
                {
                    if(j==i)
                    {
                        T temp=elements[j];
                        NewElements[k]=val;
                        NewElements[k+1]=temp;
                        k+=2;
                    }
                    else
                    {
                        NewElements[k]=elements[j];
                        k++;
                    }
                }
                delete[]elements;
                numberOfElements++;
                elements=NewElements;
                break;
            }
        }
    }
    /////////////////////////////////////////
    void Push_Back(T val)
    {
        if(capacity<=numberOfElements)
        {
            capacity*=2;
        }
        T *tempror = new T[capacity];
        for(int i=0 ; i<size1() ; i++)
        {
            tempror[i]=elements[i];
        }
        tempror[size1()]=val;
        numberOfElements++;
        delete[]elements;
        elements=tempror;
    }
    void PopBack()
    {
        numberOfElements = numberOfElements-1;
    }
    void Clear()
    {
        numberOfElements=0;
    }
    void Erase(int *position)
    {
        int b = *position;
        b=b-1;
        for(int i=0 ; i<numberOfElements ; i++)
        {
            if(i==b)
            {
                    elements[i]=elements[i+1];
                  numberOfElements-=1;
                  break;
            }
        }
    }
};


#endif // FCIVECTOR_H_INCLUDED
