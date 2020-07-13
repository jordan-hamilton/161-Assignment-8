/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/27/2018
 ** Description: This function takes pointers to three integers,
 ** then sorts the values stored at the addresses of the integers
 ** by comparing the values sequentially.
 *********************************************************************/

void smallSort2(int* firstInteger, int* secondInteger, int* thirdInteger) {

  // Define a variable that will temporarily store an integer.
  int temporaryInteger;

  // Ensure that the integer stored at the address of the first variable
  // is less than the value stored at the address of the second variable.
  // Swap the values located at these addresses if needed by
  // temporarily storing a value in the temporary integer.
  if (*firstInteger > *secondInteger) {
    temporaryInteger = *firstInteger;
    *firstInteger = *secondInteger;
    *secondInteger = temporaryInteger;
  }

  // Repeat the process above, comparing the first and third integer.
  if (*firstInteger > *thirdInteger) {
    temporaryInteger = *firstInteger;
    *firstInteger = *thirdInteger;
    *thirdInteger = temporaryInteger;
  }

  // Finally, compare the second and third integer to completely
  // sort the three integers.
  if (*secondInteger > *thirdInteger) {
    temporaryInteger = *secondInteger;
    *secondInteger = *thirdInteger;
    *thirdInteger = temporaryInteger;
  }

}
