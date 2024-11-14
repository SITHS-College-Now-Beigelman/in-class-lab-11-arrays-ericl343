//Eric Lin
//Lab #11
//November 12th, 2024

//Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//Void functions
const int ARRAY = 50; 
void iniArray(double alpha[]); 
void printArray (double alpha[]);
void fillRandom(double alpha[]);
//Variables
double computeAver(double alpha[]); 
int count100(double alpha[]); 

//Start of code
int main() { double alpha[ARRAY]; 

//Initialize array with specific values 
iniArray(alpha); cout << "Array after initialization: " << endl; 
printArray(alpha); 
//Fill array with random numbers from 1-100
fillRandom(alpha); cout << "Array after filling with random values: " << endl;  
printArray(alpha); 
//Print the values in the array
double average = computeAver(alpha); 
cout << "\nAverage of array elements: " << average << endl; 
//Count elements exactly equal to 100 
int count = count100(alpha); 
cout << "Number of elements equal to 100: " << count << endl; 
return 0; 
} 
//Initialize the array as described 
void iniArray(double alpha[]) { 
    for (int i = 0; i < 25; i++) 
        {alpha[i] = i * i;} 
    for (int i = 25; i < ARRAY; i++) 
        {alpha[i] = i * 3;} 
} 
//Print the array with 10 elements per line 
void printArray(double alpha[]) { 
    for (int i = 0; i < ARRAY; i++) {
    cout << setw(6) << alpha[i]; 
    if ((i + 1) % 10 == 0) {cout << endl;}}
} 
//Fill array with random numbers between 1 and 100 
void fillRandom(double alpha[]) { 
    srand(static_cast<unsigned int>(time(0))); 
//Random number generator 
for (int i = 0; i < ARRAY; i++)  
    {alpha[i] = rand() % 100 + 1;} 
} 
//Compute and return the average of array elements 
double computeAver(double alpha[]) { 
    double sum = 0.0; 
    for (int i = 0; i < ARRAY; i++)
    {sum += alpha[i];} 
    return sum / ARRAY; 
} 
//Count and return the number of elements exactly equal to 100 
int count100(double alpha[]) { 
    int count = 0; 
    for (int i = 0; i < ARRAY; i++) {
        if (alpha[i] == 100) {count++;}} 
    return count;
}
/*
Array after initialization: 
     0     1     4     9    16    25    36    49    64    81
   100   121   144   169   196   225   256   289   324   361
   400   441   484   529   576    75    78    81    84    87
    90    93    96    99   102   105   108   111   114   117
   120   123   126   129   132   135   138   141   144   147
Array after filling with random values:
    84    34    63    17    66    66    57    45    98    75
    11    49    72     3    31    89    88    72    26    68
    44    49   100    13     5    66    95    95    13    80
    93    50    97    91    55    30    62     3    81     3
    33    88    42    26    67     6    46    99    80    31

Average of array elements: 55.14
Number of elements equal to 100: 1
*/