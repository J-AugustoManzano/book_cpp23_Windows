// C07EX18.CPP

#include <iostream>
#include <string>

using namespace std;

struct Individual {
  char ssn[12];
  char itin[12];
};

struct CorporateEntity {
  char ein[10];
};

union Client {
  Individual ind;
  CorporateEntity corp;
};

struct ClientRecord {
  string name;
  char type;
  Client cli;
  char id_type;
};

int main(void)
{
  ClientRecord client;

  cout << "Enter the name ........: ";
  getline(cin, client.name);
  cout << endl;

  cout << "Enter the type" << endl;
  cout << endl;
  cout << "Individual       (I/i)" << endl;
  cout << "Corporate Entity (C/c)" << endl;
  cout << endl;

  cout << "What type of client ...: ";
  cin >> client.type;
  cin.ignore();

  if (toupper(client.type) == 'I')
  {
    cout << "Enter the ID type" << endl;
    cout << endl;
    cout << "SSN  (S/s)" << endl;
    cout << "ITIN (T/t)" << endl;
    cout << endl;
    cout << "What type of ID .......: ";
    cin >> client.id_type;
    cin.ignore();

    if (toupper(client.id_type) == 'S')
    {
      cout << "Enter the SSN .........: ";
      cin.getline(client.cli.ind.ssn,
        sizeof(client.cli.ind.ssn));
    }
    else if (toupper(client.id_type) == 'T')
    {
      cout << "Enter the ITIN ........: ";
      cin.getline(client.cli.ind.itin,
        sizeof(client.cli.ind.itin));
    }
  }
  else if (toupper(client.type) == 'C')
  {
    cout << "Enter the EIN .........: ";
    cin.getline(client.cli.corp.ein,
      sizeof(client.cli.corp.ein));
  }

  cout << endl;
  cout << "Data Output" << endl;
  cout << endl;

  cout << client.name << endl;
  if (toupper(client.type) == 'I')
  {
    if (toupper(client.id_type) == 'S')
      cout << "SSN: " << client.cli.ind.ssn << endl;
    else if (toupper(client.id_type) == 'T')
      cout << "ITIN: " << client.cli.ind.itin << endl;
  }
  else if (toupper(client.type) == 'C')
  {
    cout << "EIN: " << client.cli.corp.ein << endl;
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
