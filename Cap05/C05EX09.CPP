// C05EX09.CPP
// Color Definition

#include <iostream>
#include <windows.h>

using namespace std;

#define BLACK     0 // Black
#define BLUE      1 // Blue
#define GREEN     2 // Green
#define CYAN      3 // Cyan
#define RED       4 // Red
#define MAGENTA   5 // Magenta
#define BROWN     6 // Brown
#define LGRAY     7 // Light Gray
#define DGRAY     8 // Dark Gray
#define LBLUE     9 // Light Blue
#define LGREEN   10 // Light Green
#define LCYAN    11 // Light Cyan
#define LRED     12 // Light Red
#define LMAGENTA 13 // Light Magenta
#define YELLOW   14 // Yellow
#define WHITE    15 // White

void clearScreen(void)
{
  HANDLE screen;
  CONSOLE_SCREEN_BUFFER_INFO info;
  DWORD written = 0;
  screen = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(screen, &info);
  COORD pos = {0, 0};
  DWORD cells = info.dwSize.X * info.dwSize.Y;
  FillConsoleOutputCharacter(screen, ' ', cells, pos, 
    &written);
  SetConsoleCursorPosition(screen, pos);
}

void setColor(int backgroundColor, int textColor)
{
  HANDLE screen;
  int16_t color;
  screen = GetStdHandle(STD_OUTPUT_HANDLE);
  if (backgroundColor < 0 and backgroundColor > 15 and 
      textColor < 0 and textColor > 15)
    color = 15;
  else
    color = textColor + backgroundColor * 16;
  SetConsoleTextAttribute(screen, color);
}

int main(void)
{
  clearScreen();
  cout << "Color Pattern with Numeric Code";
  cout << endl << endl;

  setColor(BLUE, YELLOW);
  cout << "Background: Blue // Text: Yellow" << endl;
  cout << endl;

  setColor(BLUE, LGRAY);
  cout << "Background: Blue // Text: Light Gray" << endl;
  cout << endl;

  setColor(RED, YELLOW);
  cout << "Background: Red // Text: Yellow" << endl;
  cout << endl;

  setColor(BLACK, GREEN);
  cout << "Background: Black // Text: Green" << endl;
  cout << endl;

  setColor(LGRAY, LRED);
  cout << "Background: Light Gray // Text: Light Red";
  cout << endl << endl;

  setColor(BROWN, WHITE);
  cout << "Background: Brown // Text: White" << endl;
  cout << endl;

  setColor(BLACK, LGRAY);

  cout << "Press <Enter> to exit... ";
  cin.get();

  return 0;
}
