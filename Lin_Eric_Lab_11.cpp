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

//Main Code
int main () {
    const int ARRAY_SIZE = 50;                  //Size of the array
    double alpha[ARRAY_SIZE];

//Part 1
cout << "Part 1 and 2" << endl;
for (int i = 0; i < ARRAY_SIZE; i++) {
    if (i < ARRAY_SIZE / 2) {               //Divides into half so before 25
        alpha[i] = pow(i, 2);               
    } else {
        alpha[i] = i * 3;                   //Multiples of 3
        }
    }
//Part 2
for (int i = 0; i < ARRAY_SIZE; i++) {
    cout << setw(5) << alpha[i] << " ";     //Setting a fixed width
    if ((i + 1) % 10 == 0) {                //Print a new line every 10 elements
        cout << endl;
        }
    }
//Part 3
cout << "\nPart 3" << endl;
srand(time(0));                                 //RNG using time
for (int i = 0; i < ARRAY_SIZE; i++) {
    alpha[i] = 1 + rand() % 100;                //RNG Between 1-100
    cout << setw(6) << alpha[i] << " ";
    if ((i + 1) % 10 == 0) {                    //Still 10 per line
        cout << endl;
    }
}
//Part 4
cout << "\nPart 4" << endl;
double average;
double sum = 0;
for (int i = 0; i < ARRAY_SIZE; i++) {          //Loop through array
    sum += alpha[i];
    }
    average = sum / ARRAY_SIZE;                 //Divide total by array size for average
    cout << "The average is : " << average << endl;

//Part 5
cout << "\nPart 5" << endl;
int ele100 = 0;                                 //Starting amount of elements that are 100
for (int i = 0; i < ARRAY_SIZE; i++) {          //Loop through array
    if (alpha[i] == 100) {                      //Check if value is 100
        ele100++;                               //If value is 100, then add to count
        }
    }
    cout << "Number of elements equal to 100 : " << ele100 << endl;

 return 0;                                      //End of my program
}

/*
Part 1 and 2
    0     1     4     9    16    25    36    49    64    81
  100   121   144   169   196   225   256   289   324   361
  400   441   484   529   576    75    78    81    84    87
   90    93    96    99   102   105   108   111   114   117
  120   123   126   129   132   135   138   141   144   147

Part 3
    77     79     86     29     89     80     53     94     87     93
    33     11     89     96     27     80     87     52     94     57
    38     46     98     52      9     37     46     76      7     59
     7     41     38     84     43     62      4     85     79     31
    64     25     41     57     35     73     41     18     79     70

Part 4
The average is : 56.76

Part 5
Number of elements equal to 100 : 0
*/