#include "q.h"

#include <iostream>
#include <string>

// Returns the index of the fist space character in a string.
int CPPLib::IndexOfFirstSpace(std::string& input) 
{
    if (input.size() == 0) {
        return 0;
    }
    else {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == ' ') {
                return i;
            }
        }
    }
}

// Given the full_name, it returns the first_name and last_name.
// Note: you should use IndexOfFirstSpace function and cannot use any other
// std:: functions.
void CPPLib::SeparateFirstAndLastNames(std::string& full_name,
                                       std::string& first_name,
                                       std::string& last_name) 
                                       {
                                           if (full_name.size() == 0) {
                                               first_name = "";
                                               last_name = "";
                                           }

                                           int split = IndexOfFirstSpace(full_name);
                                           for (int i = 0; i < split; i++) {
                                               first_name.push_back(full_name[i]);
                                           }

                                           for (int j = split+1; j < full_name.size(); j++) {
                                               last_name.push_back(full_name[j]);
                                           }
                                       }

// Returns the number of vowles (a, e, i, o, u) in a string.
int CPPLib::NumberOfVowels(std::string& input) 
{
    std::string vowels = "aeiou";
    int count = 0;
    for (auto i:input) {
        for (auto j:vowels) {
            if (i == j) {
                count = count + 1;
            }
            else {
                continue;
            }
        }
    }
    return count;
}

// Returns the number of consonants (letters that are not a, e, i, o, u) in a
// string.
int CPPLib::NumberOfConsonants(std::string& input) {
    int vowels = NumberOfVowels(input);
    int count = input.size() - vowels;
    return count;
}

// Returns the revers of a string.
// Example input: 'ted', output: 'det'.
// Note: You cannot use any std:: functions.
int CPPLib::Reverse(std::string& input) {
    std::string reversed;
    if (input.size() == 0) {
        return -1;
    }
    else {
        for (int i = input.size()-1; i >= 0; i--) {
            reversed.push_back(input[i]);
        }
        input=reversed;
        return 1;
    }
}
