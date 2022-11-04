#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Library
{
private:
    string _location;
    int _numberOfShelves;

public:
    Library();
    Library(const Library& item);
    ~Library();

    Library& operator=(const Library& item);

    void setName(string val);
    string getName();

    void setShelveCount(int val);
    int getShelveCount();
};
