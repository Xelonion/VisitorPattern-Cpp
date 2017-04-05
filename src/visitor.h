#ifndef W_VISITOR_H
#define W_VISITOR_H

#include <string>
using namespace std;

class ElementNum;
class ElementStr;

class Visitor {
private:
    int value;
    string str;
public:
    Visitor();
    ~Visitor();
    void VisitElementNum(ElementNum*);
    void VisitElementStr(ElementStr*);
    int getValue();
    string getStr();
};

#endif
