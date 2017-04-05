#include "elementnum.h"

ElementNum::ElementNum()
: Element(""),
  value(0)
{}
ElementNum::ElementNum(string n, int v)
: Element(n),
 value(v)
{}
void ElementNum::AcceptVisitor(Visitor& visitor)
{
    cout << "Accept Visiter in Num" << endl;
    visitor.VisitElementNum(this);
}
int ElementNum::getValue()
{
    return value;
}
