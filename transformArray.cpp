/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/27/2018
 ** Description: This function takes a reference to a pointer to an
 ** array of integers using dynamically allocated memory, and an
 ** integer that indicates the size of that array. The function
 ** creates a dynamically allocated array that's twice as large as the
 ** integer that was passed to the function, then adds one to each of
 ** the values in the array that was passed in, appending these
 ** elements to the end of the new array.
 *********************************************************************/

void transformArray(int* &arrayIn, int arraySize) {

  // Dynamically allocate an array that's twice the size
  // of the integer value passed to the function
  int* newArray = new int[arraySize * 2];

  // Loop through the original array to get the values of all elements
  for (int count = 0; count < arraySize; count++) {

    // Fill the first half of the new array with the same values
    // from the original array.
    newArray[count] = arrayIn[count];

    // Add one to each element in the original array and store the
    // value in the first available index in the new array.
    newArray[arraySize + count] = arrayIn[count] + 1;

  }

  // Free the dynamically allocated memory from the original array if the
  // pointer is not null.
  if (arrayIn) {
    delete [] arrayIn;

    // Set the pointer to the original array to 0.
    arrayIn = 0;

    // Assign the memory address of the new array to the pointer
    // to the original array.
    arrayIn = newArray;
  }


}
