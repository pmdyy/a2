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
;@ Helpers: _everybody helped us/me with the assignment (list names or put ‘none’)__
;@
;@ Also, reference resources beyond the course textbook and the course pages on Canvas
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
;@ Name        : templates.hpp
******************************************************************************/


#ifndef TEMPLATES_HPP_
#define TEMPLATES_HPP_

// Recursive function fibonacci
// This function is a slightly modified version of the function provided
// by Deitel & Associates, Inc.
template <typename T> T fibonacci(T number) {
  if ((0 == number) || (1 == number)) { // base cases
    return number;
  }

  T a = fibonacci(number - 1);
  T b = fibonacci(number - 2);

  return a + b;
}

#endif /* TEMPLATES_HPP_ */
