/*********************************************************************
 ** Authors: Cory Schmidt, Adriano Pangelinan, David Pipitone, Patrick Snodval, Eric Sund
 ** Date: 02/18/2018
 ** File Description: "Critter.hpp" is the Critter class header file
 *********************************************************************/

enum Type {Ant, Doodlebug}

//include guards
#ifndef CRITTER_HPP
#define CRITTER_HPP

class Critter {
    private:
    int age;
    int locationRow;
    int locationCol;
    int breedAge;
    Type type;
    
    public:
    Critter(int row, int col, Type t); // Constructor sets the row and column, age, type, age to 0
    int getAge(); // Returns the age
    void setAge(int a);
    int getbreedAge(); // Returns the breed age
    int getLocationRow(); // Returns the row
    void setLocationRow(int r);
    int getLocationCol(); // Returns the column
    void setLocationCol(int c);
    Type getType(); // Returns the type of critter (Ant or Doodlebug)
    void setType(Type t);
    void moveRow (int move); // Changes the row variable by the input number
    void moveCol (int move); // Changes the col variable by the input number
    void moveRandoml(); // Moves the object a random direction (up, left, down, or right)
    void findRandomLocation(); // Finds a random location
    void breed();
    
}

#endif /* Critter_hpp */
