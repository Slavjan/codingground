#include <stdio.h>

int triangle(int a[5][5]);

int main()
{
    int b[5][5];
    
    int i = 0,
        j = 0;
        
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            b[i][j] = i+1*j;
            
            printf("%i:%i > %i \n", i, j, i+1*j);
        }
    }
    
    
    
    printf("Hello, World! %i \n", triangle(b));

    
    
    return 0;
}

int triangle(int a[5][5])
{
    int i = 0,
        j = 0;
        
    int summ = 0;
        
    for(i = 0; i < 5; i++)
    {  
        for(j = i; j < 5; j++)
        {
            summ += a[i][j];
        }
    }
    
    return summ;
}