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
int main() { double alpha[ARRAY]; 

//Initialize array with specific values 
iniArray(alpha); cout << "Array after initialization: \n"; 
printArray(alpha); 
//Fill array with random numbers from 1-100
fillRandom(alpha); cout << "\nArray after filling with random values: \n"; 
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
} // Print the array with 10 elements per line 
void printArray(double alpha[]) { 
    for (int i = 0; i < ARRAY; i++) 
    {cout << setw(6) << alpha[i]; 
    if ((i + 1) % 10 == 0) {cout << endl;}}
} 
// Fill array with random numbers between 1 and 100 
void fillRandom(double alpha[]) { 
    srand(static_cast<unsigned int>(time(0))); 
// Seed the random number generator 
for (int i = 0; i < ARRAY; i++)  
    {alpha[i] = rand() % 100 + 1;} 
} 
// Compute and return the average of array elements 
double computeAver(double alpha[]) { 
    double sum = 0.0; 
    for (int i = 0; i < ARRAY; i++)
    {sum += alpha[i];} 
    return sum / ARRAY; } 
// Count and return the number of elements exactly equal to 100 
int count100(double alpha[]) { 
    int count = 0; 
    for (int i = 0; i < ARRAY; i++) {
        if (alpha[i] == 100) { count++; } } 
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
    46    13    44    54    36    97    33    91    56    47
    93    16    70    82    48     1    63    85    24    19
    75    58     4    99    38    67    76    54    73    34
    23    26    55    83    37    20    48    64    76    50
    52    96    41    19    74     4    27    81    55    23

Average of array elements: 51
Number of elements equal to 100: 0
*/