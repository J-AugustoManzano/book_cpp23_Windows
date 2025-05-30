// C06EX12.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t a = 1;
  int32_t b = 1;

  int32_t *pa = nullptr;
  int32_t *pb = nullptr;

  pa = &a;
  pb = &b;

  cout << "Value A = " << *pa << " at address " << pa;
  cout << "." << endl;
  cout << "Value B = " << *pb << " at address " << pb;
  cout << "." << endl;
  cout << endl;

  if (pa > pb)
    cout << "Address A before address B.";
  else
    cout << "Address A after address B.";
  cout << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
