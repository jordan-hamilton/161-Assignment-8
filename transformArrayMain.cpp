#include <iostream>

using std::cout;
using std::endl;

void transformArray(int* &arrayIn, int arraySize);

int main() {

  int* myArray = new int[5];
  myArray[0] = 1;
  myArray[1] = 3;
  myArray[2] = 5;
  myArray[3] = 7;
  myArray[4] = 9;

  cout << "From main: " << myArray << endl;

  transformArray(myArray, 5);

  cout << "From main: " << myArray[5] << endl;
  cout << "From main: " << myArray[6] << endl;
  cout << "From main: " << myArray[7] << endl;
  cout << "From main: " << myArray[8] << endl;
  cout << "From main: " << myArray[9] << endl;

  cout << "From main: " << myArray << endl;

  if(myArray) {
    delete []myArray;
    myArray = NULL;
  } else {
    cout << "This is a null pointer." << endl;
  }

  return 0;
}
