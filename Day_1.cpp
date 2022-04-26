#include <iostream>
using namespace std;

int main() {
      
  double numbers[] = {7, 5, 6, 12, 35, 27};

  double sum = 0;
  double count = 0;
  double average;
 
  cout << "The numbers are: ";

 int i;
  for( i=0;i<6;) {
    cout << numbers[i] << "  ";
  
    sum += numbers[i];

    i++;
  }

  cout << "\nTheir Sum = " << sum << endl;

  average = sum / i;
  cout << "Their Average = " << average << endl;

  return 0;
}
