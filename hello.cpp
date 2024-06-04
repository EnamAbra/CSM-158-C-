#include <iostream>

using namespace std;

int main()
{
    double HoursWorked;
  double grossSalary;
  int NumberOfChildren;
  double NHCL;
  double NetPay;
  double DistrictTax;
  double Edufund;
  double totaldeduction;
  double IncomeTax;


  cout<<"Input Number of hours worked"<<endl;
  cin>>HoursWorked;
  cout<<"Enter your number of children"<<endl;
  cin>>NumberOfChildren;
  cout<<"Enter your Gross Salary"<<endl;
  cin>>grossSalary;
  if(HoursWorked > 40){
    grossSalary = 40 *5 +((1.5 * 5)*( HoursWorked-40));
  }
 else{
    grossSalary = 40* HoursWorked;
 }

if(NumberOfChildren > 3){
    Edufund = (NumberOfChildren-3)*0.5;
}
IncomeTax = 0.15 * grossSalary;
NHCL = 0.025  * grossSalary;
DistrictTax = 0.01  * grossSalary;

totaldeduction = IncomeTax  + NHCL + DistrictTax + Edufund;

cout<<"Total Deduction : "<<totaldeduction<<endl;
cout<<"Income Tax: "<<IncomeTax<<endl;
cout<<"District Tax : "<<DistrictTax<<endl;
cout<<"NHCL : "<< NHCL<<endl;











    return 0;
}