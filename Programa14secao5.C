#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    for (int number = 100; number <= 200 ; number++)
    {
        if (number % 2 != 0);
        {
           printf("%d\n ", number);
          
        }
        
    }
    
return 0;
    
}
