#include <iostream>
#include <set>

/*
* These statements make the specified class available to this program
*/
using std::cin;
using std::cout;
using std::set;

/*
* checkConditions:
  parameters:

  array: two-dimensional array of integers, rowSize: size of outermost array, colSize: size of the nested array(s), conditions: a set of integers

* Description:
  Checks a given array against a set of integers.
  
  (1) if all the numbers in the array are contained in the set the function returns 0
  (2) if any number in the array is not contained within the set then the function returns -1
*/
int checkConditions(int array[3][4], int rowSize, int colSize, set<int> conditions);

int main(void)
{
  checkConditions;
}

int checkConditions(int array[3][4], int rowSize, int colSize, set<int> conditions)
{
  for (int row = 0; row < rowSize; row++)
  {
    for (int col = 0; col < colSize; col++)
    {
      if (array[row])
      {
        
      };
    };
  };
};