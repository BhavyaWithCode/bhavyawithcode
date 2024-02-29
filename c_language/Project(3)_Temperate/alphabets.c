#include <stdio.h>
#include <conio.h>

int main()
{
    char alphabet;
    clrscr();
    for (alphabet = 'a'; alphabet <= 'z'; alphabet += 4)
    {
        printf("%c", alphabet);
    }

    getch();
    return 0;
}
