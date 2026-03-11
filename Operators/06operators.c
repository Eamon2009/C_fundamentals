#include <stdio.h>

int main()
{
       int a = 20, b = 10, result;

       // 1. Arithmetic
       result = a + b;
       printf("Sum: %d\n", result);

       // 2. Compound Assignment
       a += 5; // a is now 25
       printf("New value of a: %d\n", a);

       // 3. Relational
       if (a > b)
       {
              printf("a is greater than b\n");
       }

       // 4. Increment
       b++; // b becomes 11
       printf("Incremented b: %d\n", b);

       return 0;
}