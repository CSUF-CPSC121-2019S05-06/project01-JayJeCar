//This program is designed to create notes
#include <iostream>
#include <string> //Header file needed to use string objects

void add_note()
{
  std::string title;
  std::string note;

  std::cout << "Please enter the note's title: " << std::endl;
  std::cin >> title;
  std::cout << "Please enter the note: " << std::endl;
  std::cin >> note;
}

int main()
{

  char choice;

  //Display the menu to get the user's choice
  std::cout << "Welcome to TuffyNotes" << std::endl;
  std::cout << "[C] Create a Note" << std::endl;
  std::cout << "[E] Exit" << std::endl;
  std::cin >> choice;

  if (choice=='C')
  {
    add_note();   //Call the function
    std::cout << "Note added!" << std::endl;
  }

  /*else if (choice == 'Q')
  {

  }
  */

  else if (choice == 'E')
  {
    std::cout << "Thank you for using TuffyNotes!" << std::endl;
  }
  else
  {
    std::cout << "Invalid choice. PLease try again." << std::endl;
  }

  return 0;
}
