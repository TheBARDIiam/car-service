#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int day;
    int month;
    int year; 
  };
  


  struct {
    string brand;
    string model;
    int ID;
    char owner_name[20];
    char owner_surname[20];
  
  } myCar1, myCar2; 
  
  // Add whichever struct you see fit as prio

  // Put data into the first structure
  myCar1.owner_name = "Rick"
  myCar1.owner_surname = "Sanchez"
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.ID = 1999;

  // Put data into the second structure
  myCar2.owner_name = "Morty"
  myCar2.owner_surname = "Sanchez"
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.ID = 1969;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.ID << " " << myCar1.owner_name << " " << myCar1.owner_surname << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.ID << << myCar2.owner_name << " " << myCar2.owner_surname << "\n";
  return 0;
}
