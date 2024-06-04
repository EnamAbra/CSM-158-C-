#include <iostream>

using namespace std;
int main(){
    char grade;
    cout<< "Welcome to the interview room"<<endl;
    cout<< "Enter your grade: ";
    cin>> grade;
    switch(grade)
    {
        case 'A':
        cout<<"Your grade is within the range 100-70.\n you are welcome to the interview";
        break;
        case 'B':
        cout<<"Your grade is within the range 60-69.\n";
          break;
          case 'C':
        cout<<"Your gra:de is within the range 50-59.\n";
        break;
        case 'D':
        cout<<"Your grade is within the range 40-49\n";
        break;
        default:
        cout<<"Please enter your grade again\n";
        break;




    }
    return 0;
}
