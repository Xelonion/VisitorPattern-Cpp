#include "visitor.h"
#include "elementnum.h"
#include "elementstr.h"
#include <iostream>

using namespace std;
Visitor::Visitor()
:
value(0),
str("")
{}

Visitor::~Visitor()
{}

void Visitor::VisitElementNum(ElementNum* element) {
    value = 0; str = "";
    value = element->getValue();
    cout << " ElementNum: " << element->getName() << ", " << value << endl;
}

void Visitor::VisitElementStr(ElementStr* element) {
    value = 0; str = "";
    str = element->getText();
    cout << " ElementStr: " << element->getName() << ", "  << str << endl;
}

int Visitor::getValue()
{
    return value;
}
string Visitor::getStr()
{
    return str;
}
