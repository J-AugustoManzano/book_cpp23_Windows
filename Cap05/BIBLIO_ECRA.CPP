// BIBLIO_ECRA.CPP
// File with the code for the functions of the ECRA.h library

#include <iostream>
#include <windows.h>

// Clear screen
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

// Set cursor position
void setPosition(int row, int column)
{
  HANDLE screen;
  CONSOLE_SCREEN_BUFFER_INFO info;
  COORD pos;
  screen = GetStdHandle(STD_OUTPUT_HANDLE);
  if (GetConsoleScreenBufferInfo(screen, &info))
  {
    pos.X = column - 1;
    pos.Y = row - 1;
    if (pos.X >= 0 and pos.X < info.dwSize.X and
        pos.Y >= 0 and pos.Y < info.dwSize.Y)
      SetConsoleCursorPosition(screen, pos);
  }
}

// Set color
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
