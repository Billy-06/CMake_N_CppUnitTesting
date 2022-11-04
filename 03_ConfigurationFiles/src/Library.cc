#include  "Library.h"

Library::Library()
{
    _location = "";
    _numberOfShelves = 0;
}

Library::Library(const Library& item)
{
    this->_location = item._location;
    this->_numberOfShelves = item._numberOfShelves;
}

Library::~Library()
{
    delete this;
}

Library& Library::operator=(const Library& item)
{
    this->_location = item._location;
    this->_numberOfShelves = item._numberOfShelves;

    return *this;
}

void Library::setName(string val)
{
    _location = val;
};

string Library::getName()
{
    return _location;
};

void Library::setShelveCount(int val)
{
    _numberOfShelves = val;
};

int Library::getShelveCount()
{
    return _numberOfShelves;
};
