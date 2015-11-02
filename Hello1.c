#include <stdio.h>
#include <string.h>

char getname(void)
{
	char* name[35];
        printf("State your name:");
        scanf("%s", &name);
        printf("Hello, World %s\n", name);
        return name;
}

char toUppercase(char argv[])
{
	for(int i=0; i<strlen(argv); i++){
		argv[i] = argv[i]+('A'-'a');
	}
	return argv;
}

int addnumbers(void)
     {
       int firstNumber; int secondNumber;
       printf("Please enter a number:");
       scanf("%i", &firstNumber);

       printf("Please enter another number:");
       scanf("%i", &secondNumber);
       int sum  = firstNumber+secondNumber;
       printf("Calculating...%i\n", (sum));
       return sum;
     }

int main(void)
{
        toUppercase(getname());
}
