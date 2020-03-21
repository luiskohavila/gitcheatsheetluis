//Exercise 9: Arrays and Strings

#include <stdio.h>
int main(int argc, char *argv[])
{
int numbers[4] = {0}; //Initializing with 0
char name[4] = {'a'}; //Initializing with a
// first, print them out raw
printf("numbers: %d %d %d %d\n",
	numbers[0], numbers[1],
	numbers[2], numbers[3]);

printf("name each: %c %c %c %c\n",
	name[0], name[1],
	name[2], name[3]);

printf("name: %s\n", name);
    // setup the numbers
    //Asigning values to the numbers variable of type digit
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
    // setup the name
    //Asigning values to the name variable of type char
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0'; //Null point to end the text chain
    // then print them out initialized
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n",
	name[0], name[1],
	name[2], name[3]);
    // print the name like a string
	printf("name: %s\n", name);
    // another way to use name
	char *another = "Zed"; //Initializing an array

	printf("another: %s\n", another); //Print as a string

    printf("another each: %c %c %c %c\n", //Print as a character
		another[0], another[1],
		another[2], another[3]);

	 return 0; //Everything goes well
}

/*
EXTRA CREDITS
===================================================================
Assign the characters into numbers and then use printf to print them
a character at a time. What kind of compiler warnings did you get?

--------------------------------------------------------------------
Do the inverse for name , trying to treat it like an array of int and
print it out one int at a time. What does Valgrind think of that?

--------------------------------------------------------------------
How many other ways can you print this out?

-------------------------------------------------------------------------
If an array of characters is 4 bytes long, and an integer is 4 bytes long,
then can you treat the whole name array like it's just an integer?
How might you accomplish this crazy hack?

-----------------------------------------------------------------------------
Take out a piece of paper and draw out each of these arrays as a row of boxes.
Then do the operations you just did on paper to see if you get them right.

----------------------------------------------------------------------------
Convert name to be in the style of another and see if the code keeps working.

=============================================================================
*/
