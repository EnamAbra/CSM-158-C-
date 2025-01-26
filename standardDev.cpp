#include <iostream>
#include <cmath>

using namespace std;

int main(){

double mean,standardDev,variance;
 double sum = 0; 
 double sumDev = 0;
int i,size;




cout<<"Enter the size (Number of numbers)"<<endl;
cin>>size;
double* array = new double[size];


for(i=1; i <= size; i++ ) {
cout << "array["<<i<<"]";
cin >> array[i];  
sum += array[i];
}

mean = sum /size;
for(i=1; i <= size; i++) {
    sumDev += pow(array[i]-mean,2);
}

variance = sumDev / size;
standardDev = sqrt(variance);
cout<<"Standard Deviation = " << standardDev<<endl;


}