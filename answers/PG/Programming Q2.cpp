#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Customer
{
public:
  float base_charge = 0, item_charge = 0;
  int items = 0;

  bool membersEmpty(){
    if (base_charge == 0 || item_charge == 0 || items == 0) {
      return true;
    } else {
      return false;
    }
  }

  float computeCharge()
  {
    float final_charge = base_charge + (items * item_charge);
    return final_charge;
  }
};

int main()
{
  Customer person1, person2, person3;

  while (person1.membersEmpty()) {
    cout << "Enter the base charge: ";
    cin >> person1.base_charge;
    cout << "Enter the numbers of items: ";
    cin >> person1.items;
    cout << "Enter the item charge: ";
    cin  >> person1.item_charge;
    cout << "Charge: R" << person1.computeCharge() << endl;
  }
  
  return 0;
}