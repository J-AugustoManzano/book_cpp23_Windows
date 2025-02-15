// C02EX15.CPP

/**
  The following program demonstrates the use of comment 
  lines in a program code written in the C++ programming 
  language. The program presents the number of bits for 
  each data type supported in C++.
*/

#include <iostream> // for the use "cin", "cout", and "endl"
#include <iomanip>  // for the use "setw()"

using namespace std;

/**
  Main function.
  @return 0 if the program is successful.
*/

int main(void)
{
  // Variable declarations for various data types.
  int8_t        ipos08;
  uint8_t       ineg08;
  int16_t       ipos16;
  uint16_t      ineg16;
  int32_t       ipos32;
  uint32_t      ineg32;
  int64_t       ipos64;
  uint64_t      ineg64;
  char          cpos08;
  unsigned char cneg08;
  wchar_t       cwid16;
  float         fdec32;
  double        fdec64;
  long double   fdec99;
  bool          lboo08;

  // Sets the output formatting.
  cout << "Data types and their sizes in bits.\n";
  cout << endl;

  // Displays the sizes of data types in bits.
  cout << "integer (+) ........: ";
  cout << setw(3) << sizeof(ipos08) * 8 << " bits\n";
  cout << "integer (-) ........: ";
  cout << setw(3) << sizeof(ineg08) * 8 << " bits\n";
  cout << "integer (+) ........: ";
  cout << setw(3) << sizeof(ipos16) * 8 << " bits\n";
  cout << "integer (-) ........: ";
  cout << setw(3) << sizeof(ineg16) * 8 << " bits\n";
  cout << "integer (+) ........: ";
  cout << setw(3) << sizeof(ipos32) * 8 << " bits\n";
  cout << "integer (-) ........: ";
  cout << setw(3) << sizeof(ineg32) * 8 << " bits\n";
  cout << "integer (+) ........: ";
  cout << setw(3) << sizeof(ipos64) * 8 << " bits\n";
  cout << "integer (-) ........: ";
  cout << setw(3) << sizeof(ineg64) * 8 << " bits\n";
  cout << "character (+) ......: ";
  cout << setw(3) << sizeof(cpos08) * 8 << " bits\n";
  cout << "character (-) ......: ";
  cout << setw(3) << sizeof(cneg08) * 8 << " bits\n";
  cout << "character largo ....: ";
  cout << setw(3) << sizeof(cwid16) * 8 << " bits\n";
  cout << "single float .......: ";
  cout << setw(3) << sizeof(fdec32) * 8 << " bits\n";
  cout << "double float .......: ";
  cout << setw(3) << sizeof(fdec64) * 8 << " bits\n";
  cout << "long float .........: ";
  cout << setw(3) << sizeof(fdec99) * 8 << " bits\n";
  cout << "boolean ............: ";
  cout << setw(3) << sizeof(lboo08) * 8 << " bits\n";
  cout << endl;

  // Waits for user input to exit.
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
