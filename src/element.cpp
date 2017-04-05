#include "element.h"

Element::Element()
: name("")
 {}
Element::Element(string n)
: name(n)
 {}
Element::~Element()
{}

string Element::getName()
{
    return name;
}
