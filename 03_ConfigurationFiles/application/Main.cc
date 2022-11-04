#include "Library.h"
#include "config.hpp"

using namespace std;

int main()
{
    Library *lib = new Library();
    lib->setShelveCount(34);
    lib->setName("Downing Street");

    cout
    << "Project Name: " << project_name
    << "\nProject Version: " << project_version
    << "\n\nThe new Library at: "
    << lib->getName()
    << "\nhas been reported to have: "
    << lib->getShelveCount()
    << " shelves";

    delete lib;

    return 0;
}
