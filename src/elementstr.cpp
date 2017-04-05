#include "elementstr.h"

ElementStr::ElementStr()
: Element(""),
 text("")
{}
ElementStr::ElementStr(string n, string t)
: Element(n),
 text(t)
{}
void ElementStr::AcceptVisitor(Visitor& visitor)
{
    cout << "Accept Visiter in Str" << endl;
    visitor.VisitElementStr(this);
}
string ElementStr::getText()
{
    return text;
}
