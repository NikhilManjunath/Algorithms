#include <iostream>
#include <list>
#include <set>
#include <vector>

// Given two separate strings for first and last names, prints the full name.
void PrintFullName(std::string& first_name, std::string& last_name) 
{
  std::cout << first_name << ' ' << last_name << std::endl;
}


// Reads the first and last names from the input and stores them in fist_name
// and last_name.
void GetFullName(std::string& first_name, std::string& last_name) 
{
  std::cout << "What is your first name?" << std::endl;
  getline(std::cin, first_name);
  std::cout << "What is your last name?" << std::endl;
  getline(std::cin, last_name);
  std::cout << "Your full name is: " << std::endl;
}

int main() {
  // std::string first_name = "Nikhil ";
  // std::string last_name = "Manjunath";
  std::string first_name, last_name;
  GetFullName(first_name,last_name);
  PrintFullName(first_name,last_name);
  return 0;
}