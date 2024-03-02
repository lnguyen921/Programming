//The purpose of this code is to understand pointers and memory allocation
// Operators: & and *
// Source: https://www.youtube.com/watch?v=2ybLD6_2gKM
//Visualize code: https://pythontutor.com/visualize.html#mode=edit


int main() {

  int x = 4;
  //& is a "value of addr" operator
  int * pX = &x;
  //* is "value at addr" operator
  int y = *pX; 
  return 0;
}