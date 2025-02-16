// C04EX06.CPP

#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
  uint16_t n, fact;
  char resp {'Y'};
  
  while (toupper(resp) == 'Y')
    {
    cout << "Factorial Program" << endl << endl;
    
    cout << "Factorial of what value: "; cin >> n; 
    cin >> n;
    cin.ignore(80, '\n');
    
    fact = 1;
    for (uint16_t i = 1; i <= n; ++i)
      fact *= i;
    
    cout << endl;
    cout << "Factorial of " << n << " = "<< fact << endl;
    
    cout << endl << "Do you want to continue?" << endl;
    cout << "Press [Y] for YES, other letter for NO: ";
    cin.get(resp); 
    cin.ignore();
    cout << endl;
  }
  
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
