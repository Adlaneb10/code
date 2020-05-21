/*
Summary: Program to demonstrate the dereference operator
Author: Michael Collins
Date of Last Edit: 13.11.19
OS: Windows 10
*/

#include <stdio.h>

int main(){

  int var;
  int *ptr;

  var = 1;
  ptr = &var;

  printf("Ptr located at %p\n", ptr);
  printf("*Ptr contains %d\n", *ptr);
 

  return 0;
}//End Main.
