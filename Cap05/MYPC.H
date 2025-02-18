// MYPC.H (support for C05EX21)
// Header file for namespace

#include <iostream>

using namespace std;

#ifndef __MYPC_H
#define __MYPC_H

namespace testnamespace
{
   void subTest(void)
   {
      cout << "Test in mypc." << endl;
      cout << endl;
      cout << "Press <Enter> to exit... ";
      cin.get();
   }
}

#endif // __MYPC_H
