/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "Critter.hpp" is the Critter class header file
 *********************************************************************/

//"Critter.hpp" is the Critter class header file
#include "Critter.hpp"
#include <cstdlib>
    /*private:
    int age;
    int locationRow;
    int locationCol;
    int breedAge;
    Type type;*/
    
   
Critter::Critter(int row, int col, Type t) // Constructor sets the row and column, age, type, age to 0
{
    setLocationRow(row);
    setLocationCol(col);
    setType(t);
    setAge = 0;
}

int Critter::getAge()
{
    return age;
}
void Critter::setAge(int a)
{
    age = a;
}
int Critter::getbreedAge()
{
    return breedAge;   
}
int Critter::getLocationRow()
{
    return locationRow;
}
void Critter::setLocationRow(int r)
{
    locationRow = r;
}
int Critter::getLocationCol()
{
    return locationCol;
}
void Critter::setLocationCol(int c)
{
    locationCol = c;
}
Type Critter::getType()
{
    return type;
}
void Critter::setType(Type t)
{
    type = t;
}
void Critter::moveRow(int move)
{
    setLocationRow(getLocationRow() + move);
}
void Critter::moveCol(int move)
{
    setLocationCol(getLocationCol() + move);
}
  
    void breed();
    
