#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print _putchar using only _putchar file
 *
 * Return: Always 0.
 */
int main(void)
{
    char *mystr;
    int i;
    int n;

    mystr = "_putchar";

    for(i = 0, n = strlen(mystr); i < n; i++)
    {
	   _putchar(mystr[i]);
    }

   return (0); 
}
