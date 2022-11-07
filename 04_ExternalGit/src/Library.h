#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;


/**
 * @brief Library class that cotains  a location field and a 
 * number of shelves field.
 * 
 * 
 */
class Library
{
private:
    string _location;
    int _numberOfShelves;

public:
    /**
     * @brief Construct a new Library object using the library's 
     * default constructor.
     *  
     */
    Library();

    /**
     * @brief Construct a new Library object using a copy cosntructor
     * 
     * @param item This is a reference value of an existing Lirbary object
     * that can be passed to the copy constructor
     */
    Library(const Library& item);

    /**
     * @brief Destroy the Library object using the default destructor
     * 
     */
    ~Library();

    /**
     * @brief Deep copy using the assignment operator.
     * 
     * @param item This is a reference value of an existing Lirbary object
     * that can be passed to the copy constructor
     * 
     * @return This operator returns a Library& rvalue
     */
    Library& operator=(const Library& item);

    /**
     * @brief A Setter for the name field of the object
     * 
     * @param val The string value to be assigned as the object name
     */
    void setName(string val);

    /**
     * @brief A Getter for the Name field of the object
     * 
     * @return string value representative of the name of the object
     */
    string getName();

    void setShelveCount(int val);
    int getShelveCount();
};
