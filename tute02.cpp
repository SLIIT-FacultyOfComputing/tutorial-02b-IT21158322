/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{ double salary,netsalary;
  int etype,othrs,otrate;
  std::cout<< "Enter Employee type";
  std::cin>>etype;
  std::cout<< "Enter salary";
  std::cin>>salary;
  std::cout<< "Enter othrs";
  std::cin>>othrs;
 
  switch(etype)
  {
    case 1:
      otrate=1000;
      break;
    case 2:
      otrate=1500;
      break;
    default:
      otrate=1700;
      break;

  }
  netsalary = salary + othrs* otrate;
  std::cout<<"Net salary is "<<netsalary;

}
