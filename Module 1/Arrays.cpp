#include <iostream>
using namespace std;

int main() {
   // Basic Declaration without Initialization
   int myArray1[5];

   // Initialization with Specific Values
   int myArray2[5] = {1, 2, 3, 4, 5};

   // Partial Initialization
   int myArray3[5] = {10, 20};

   // Uniform Initialization (C++11 and Later)
   int myArray4[5]{100, 200, 300, 400, 500};

   // Implicit Size Declaration
   int myArray5[] = {5, 10, 15, 20, 25};

   // Initialization with Default Values
   int myArray6[5] = {};

   // String Literal Initialization for Character Arrays
   char myCharArray[] = "Hello";

   // Accessing Array Elements
   cout << "Accessing elements of myArray2:" << endl;
   for (int i = 0; i < 5; ++i) {
      cout << "Element at index " << i << ": " << myArray2[i] << endl;
   }

   // Modifying Array Elements
   myArray2[0] = 42; // Update first element
   cout << "\nModified myArray2[0]: " << myArray2[0] << endl;

   // Displaying Arrays
   cout << "\nDisplaying myArray3 (Partial Initialization):" << endl;
   for (int i = 0; i < 5; ++i) {
      cout << "Element at index " << i << ": " << myArray3[i] << endl;
   }

   // Size of Arrays
   cout << "\nSize of myArray5: " << sizeof(myArray5) / sizeof(myArray5[0]) << endl;

   // Contiguous Memory Demonstration
   cout << "\nMemory Addresses of myArray4 Elements:" << endl;
   for (int i = 0; i < 5; ++i) {
      cout << "Address of myArray4[" << i << "]: " << &myArray4[i] << endl;
   }

   return 0;
}
