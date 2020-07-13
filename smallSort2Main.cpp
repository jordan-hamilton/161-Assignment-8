#include <iostream>

using std::cout;
using std::endl;

void smallSort2(int *, int *, int *);

int main () {
  int first = 14;
  int second = -90;
  int third = 2;
  smallSort2(&first, &second, &third);
  cout << first << ", " << second << ", " << third << endl;
  return 0;
}
