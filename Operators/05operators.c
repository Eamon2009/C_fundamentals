#include <stdio.h>

int main()
{
       int x = 5, y = 10;

       // Relational: Is x less than y?
       if (x < y)
       {
              printf("x is smaller than y\n");
       }

       // Logical: Are both conditions true?
       if (x < y && y == 10)
       {
              printf("Both conditions are True!\n");
       }

       return 0;
}