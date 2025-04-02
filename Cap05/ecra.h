// ECRA.H
// Header file for video mode control
// windows.h

// Constants for text and background colors

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

void clearScreen(void);
void setPosition(int row, int column);
void setColor(int backgroundColor, int textColor);
