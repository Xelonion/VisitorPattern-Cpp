#include <iostream>
#include <vector>
#include "visitor.h"
#include "element.h"
#include "elementnum.h"
#include "elementstr.h"


int main(int argc, const char * argv[]) {
    Visitor v;
    vector<Element*> elements;
    int i=0;
    Element* elementNum = new ElementNum("Test",1);
    Element* elementStr = new ElementStr("Test2","Text");

    elementNum->AcceptVisitor(v);
    elementStr->AcceptVisitor(v);

    elements.push_back(elementNum);
    elements.push_back(elementStr);

    cout << endl << "\tWalking through the vector" << endl << endl;

    for(i = 0; i < elements.size(); i++)
    {
        elements[i]->AcceptVisitor(v);
        cout << endl << "Members of the Visitor at iteration: " << i << endl;
        cout << "Str: " << v.getStr() << endl;
        cout << "Value: " << v.getValue() << endl << endl;
    }
    delete elementNum;
    delete elementStr;

    return 0;
}
