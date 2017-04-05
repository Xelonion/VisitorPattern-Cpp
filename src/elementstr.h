#ifndef W_ElementStr_H
#define W_ElementStr_H

#include "element.h"

class ElementStr : public Element
{
private:
    string text;
public:
    ElementStr();
    ElementStr(string,string);

    void AcceptVisitor(const Visitor&);
    string getText();
};

#endif
