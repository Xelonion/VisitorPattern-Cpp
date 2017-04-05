#ifndef W_ELEMENTNUM_H
#define W_ELEMENTNUM_H

#include "element.h"

class ElementNum : public Element
{
private:
    int value;
public:
    ElementNum();
    ElementNum(string,int);

    virtual void AcceptVisitor(const Visitor&) override;
    int getValue();
};

#endif
