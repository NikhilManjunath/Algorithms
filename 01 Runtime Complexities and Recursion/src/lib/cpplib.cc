#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
double CPPLib::FindAverage(const std::vector<int> &inputs) {
    if (inputs.size() == 0) {
        return -1;
    }

    double result = 0;
    for (auto n : inputs) {
        result += n;
    }

    return result/(inputs.size());
}

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function.
    return "Nikhil, nikhilm6@usc.edu, USC"; 
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function.
    std::vector<int> res;
    if (input.size() == 0) {
        return res;
    }
    for (auto vec1:input) {
        if (vec1.size() == 0) {
            continue;
        }
        else {
            for (auto vec2:vec1) {
                if (vec2.size() == 0) {
                    continue;
                }
                else {    
                    for (auto n:vec2) {
                        res.push_back(n);
                    }
                }
            }
        }
    }
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    int noOfStairs;
    if (n == 0) {
        noOfStairs = 0;
    }
    else if (n < 0) {
        noOfStairs = -1;
    }
    else if (n == 1) {
        noOfStairs = 1;
    }
    else if (n == 2) {
        noOfStairs = 2;
    }
    else {
        noOfStairs = climbStairs(n-1) + climbStairs(n-2);
    }

    return noOfStairs;
}
