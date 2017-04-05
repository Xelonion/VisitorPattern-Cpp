
#include <iostream>
#include "visitor.h"
#include "element.h"
#include "elementnum.h"
#include "elementstr.h"

int main(int argc, const char * argv[]) {
    Visitor v;

    Element* elementNum = new ElementNum("Test",1);
    Element* elementStr = new ElementStr("Test2","Text");

    elementNum->AcceptVisitor(v);
    elementStr->AcceptVisitor(v);

    delete elementNum;
    delete elementStr;

    return 0;
}
