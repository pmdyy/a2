/******************************************************************************
;@
;@ Student Name 1: student1
;@ Student 1 #: 123456781
;@ Student 1 userid (email): stu1 (stu1@sfu.ca)
;@
;@ Student Name 2: student2
;@ Student 2 #: 123456782
;@ Student 2 userid (email): stu2 (stu2@sfu.ca)
;@
;@ Below, edit to list any people who helped you with the code in this file,
;@      or put ‘none’ if nobody helped (the two of) you.
;@
;@ Helpers: _everybody helped us/me with the assignment (list names or put
‘none’)__
;@
;@ Also, reference resources beyond the course textbook and the course pages on
Canvas
;@ that you used in making your submission.
;@
;@ Resources:  ___________
;@
;@% Instructions:
;@ * Put your name(s), student number(s), userid(s) in the above section.
;@ * Edit the "Helpers" line and "Resources" line.
;@ * Your group name should be "A2_<userid1>_<userid2>" (eg. A2_stu1_stu2)
;@ * Form groups as described at:  https://courses.cs.sfu.ca/docs/students
;@ * Submit your file to courses.cs.sfu.ca
;@
;@ Name        : assign2.cpp
******************************************************************************/
// fibonacci program using recursion

#include <chrono>
#include <iostream>
// *** add more include files if you would like ***
#include "bignumber.h"

#include "templates.hpp"
using namespace std;
using namespace std::chrono;

using fibonacciType1 = BigNumber; // create an alias declaration (a type alias)

int main() {

  cout << "Do not change this line.  Enter a sequence of increasing Fibonacci "
          "indicies and -1 to stop input."
       << endl;

  // Section 1
  // *** insert here a loop to input Fibonacci indexes and calculate Fibonacci
  // numbers, or input -1 to stop input ***
  int n{-2};
  int index{0};
  while (cin >> n, -1 != n) {
    index = n;
    cout << index << endl;
    // cout << fibonacci(index) << endl;
    cout << fibonacci<fibonacciType1>(index) << endl;
  }

  // Section 2
  // use the next line as is to capture the start time of a 2 second period
  time_point<steady_clock> start = steady_clock::now();

  const int runLimit{2}; // generate Fibonacci numbers for 2 more seconds

  while ((steady_clock::now() - start) / 1s <
         runLimit) { // true if 2 seconds since start time have not yet elapsed
    ; // *** put code here to generate more Fibonacci numbers. ***
    fibonacci<fibonacciType1>(++index);
    //      fibonacci<fibonacciType2>(++index);
  }

  // *** output the highest Fibonacci index calculated ***
  cout << index << endl;

  return 0;
}
