#include <iostream>
#include <string> //Header file needed to use string objects

int main() {

std::string title;
std::string note;
char choice;

//Display the menu to get the user's choice
std::cout << "Welcome to TuffyNotes" << std::endl;
std::cout << "[C] Create a Note" << std::endl;
std::cout << "[E] Exit" << std::endl;
std::cin >> choice;

//Validate user input
switch (choice)
{
  case 'c':
  case 'C': std::cout << "Please enter the note's title: " << std::endl;
  std::cin >> title;
  std::cout << "Please enter the note: " << std::endl;
  std::cin >> note;
  std::cout << "Note added!" << std::endl;
  break;
  case 'e':
  case 'E': std::cout << "Thank you for using TuffyNotes!" << std::endl;
  break;
  default: std::cout << "Invalid choice. PLease try again." << std::endl;
}

return 0;
}
