#include "Library.h"

using namespace std;

int main()
{
    Library *lib = new Library();
    lib->setShelveCount(34);
    lib->setName("Downing Street");

    cout
    << "\nThe new Library at: "
    << lib->getName()
    << "\nhas been reported to have: "
    << lib->getShelveCount()
    << " shelves";

    // delete lib;

    return 0;
}
