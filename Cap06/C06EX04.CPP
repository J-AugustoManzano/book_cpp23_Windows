// C06EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  char    c, *pc;
  int32_t i, *pi;
  int16_t s, *ps;
  float   f, *pf;
  double  d, *pd;
  int64_t l, *pl;
  bool    b, *pb;

  cout << "Size of 'char' ..........: " << sizeof(c);
  cout << " byte.\n";
  cout << "Size of 'int' ...........: " << sizeof(i);
  cout << " bytes.\n";
  cout << "Size of 'short' .........: " << sizeof(s);
  cout << " bytes.\n";
  cout << "Size of 'float' .........: " << sizeof(f);
  cout << " bytes.\n";
  cout << "Size of 'double' ........: " << sizeof(d);
  cout << " bytes.\n";
  cout << "Size of 'long double' ...: " << sizeof(l);
  cout << " bytes.\n";
  cout << "Size of 'bool' ..........: " << sizeof(b);
  cout << " byte.\n";
  cout << endl;

  cout << "Size of 'p char' ........: " << sizeof(pc);
  cout << " bytes.\n";
  cout << "Size of 'p int' .........: " << sizeof(pi);
  cout << " bytes.\n";
  cout << "Size of 'p short' .......: " << sizeof(ps);
  cout << " bytes.\n";
  cout << "Size of 'p float' .......: " << sizeof(pf);
  cout << " bytes.\n";
  cout << "Size of 'p double' ......: " << sizeof(pd);
  cout << " bytes.\n";
  cout << "Size of 'p long double' .: " << sizeof(pl);
  cout << " bytes.\n";
  cout << "Size of 'p bool' ........: " << sizeof(pb);
  cout << " bytes.\n";

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
