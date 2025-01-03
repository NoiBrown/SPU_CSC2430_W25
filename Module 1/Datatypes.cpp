#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
   // Fundamental Data Types
   int integerVar = 42;
   float floatVar = 3.14f;
   double doubleVar = 3.141592653589;
   char charVar = 'A';
   bool boolVar = true;

   // Derived Data Types
   int arrayVar[5] = {1, 2, 3, 4, 5};
   string stringVar = "Hello, World!";

   // User-defined Data Types
   enum Colors { RED, GREEN, BLUE };
   Colors colorVar = GREEN;

   struct Point {
      int x;
      int y;
   };
   Point pointVar = {10, 30};

   // Displaying the values and sizes of each data type
   cout << "--- Fundamental Data Types ---" << endl;
   cout << "Integer: " << integerVar << ", Size: " << sizeof(integerVar) << " bytes" << endl;
   cout << "Float: " << floatVar << ", Size: " << sizeof(floatVar) << " bytes" << endl;
   cout << "Double: " << doubleVar << ", Size: " << sizeof(doubleVar) << " bytes" << endl;
   cout << "Character: " << charVar << ", Size: " << sizeof(charVar) << " bytes" << endl;
   cout << "Boolean: " << boolVar << ", Size: " << sizeof(boolVar) << " bytes" << endl;

   cout << "\n--- Derived Data Types ---" << endl;
   cout << "Array: [";
   for (int i = 0; i < 5; i++) {
      cout << arrayVar[i] << (i < 4 ? ", " : "");
   }
   cout << "], Size: " << sizeof(arrayVar) << " bytes" << endl;
   cout << "String: " << stringVar << ", Size: " << sizeof(stringVar) << " bytes" << endl;

   cout << "\n--- User-defined Data Types ---" << endl;
   cout << "Enum (Color): " << colorVar << ", Size: " << sizeof(colorVar) << " bytes" << endl;
   cout << "Structure (Point): {x: " << pointVar.x << ", y: " << pointVar.y << "}, Size: " << sizeof(pointVar) << " bytes" << endl;

   return 0;
};