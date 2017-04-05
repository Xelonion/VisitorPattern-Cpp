#ifndef W_ELEMENT_H
#define W_ELEMENT_H

#include<string>
#include<iostream>
#include "visitor.h"

using namespace std;

class Element
{
private:
    string name;
public:
    Element();
    Element(string);
    virtual ~Element();
    virtual void AcceptVisitor(Visitor&) = 0 ;
    string getName();
};
#endif
