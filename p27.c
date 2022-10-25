#include <stdio.h>
#include <stdlib.h>


long factorial(long number);

int main(void)
{
    int i; 
    for(i=1;i<=10;i++)
    {
    	printf("%2d! = %1d\n",i,factorial(i));
	}   
    system("pause");
    return 0;
}

long factorial (long number)
{
	if(number <= 1 )
	{
		return 1;
	} 
	else
	{
		return(number * factorial(number-1));
	}
}
