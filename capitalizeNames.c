#include <stdio.h> /*standard i/o library will be used in this program*/
#include <string.h> /*string library will be used in this program*/



/*function named "getname" that will return a char value and does not take input*/

char getname(void)
{

/*Below- is a pointer to a variable by the name of "collectName" that is of char value and has the assigned maximum array input length of 35.*/   
     
	char* collectName[35];

/*Ask's the user to input a name.*/

        printf("State your name:");

/*scanf- scans the string the user input and stores it in the address of collectName.*/

        scanf("%s", &collectName);

/*The function now prints the string below and the string place holder is replaced with the user input stored in collectName*/

        printf("Hello, World %s\n", collectName);

/*The content of collectName is now returned*/
        return collectName;
}




/*A function named "toUppercase" will return a char value. The function will take an argument vector of char value*/

char toUppercase(char argv[]){

/* A for loop will start at this point.  An integer named "i" will start at index zero in the array.  "i" will be less than the string length of 
the argument vector. "i" will increase by one until the end of the string length is reached."*/        
       
       for(int i=0; i<strlen(argv); i++)
       {

/*The argument vector will start at variable "i" and converting the alpha numeric value by 32.  This new value will be stored in argument vector "i"*/
                argv[i] = argv[i]+('A'-'a');
        }

/*The argument vector will be returned*/
        return argv;
}




/*A function named "main" will return an integer value and does not take input*/

int main(void)

/*A function named "toUppercase" calls a function named "getname" as its argument.*/
{	
       toUppercase(getname());
}
