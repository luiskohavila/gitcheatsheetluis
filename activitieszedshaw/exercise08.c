//Exercise 8

#include <stdio.h>
int main(int argc, char *argv[])
{
//These are the ways to create arrays
int areas[] = {10, 12, 13, 14, 20}; //Initializing one with numbers
    char name[] = "Zed"; //With characters when we pass the text chain
	char full_name[] = { //And this one is another way to initialize
			     //and we use at the end '/0' to indicate that
			     //the text chain has ended
		'Z', 'e', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
	};

// %ld in this code to a %u since it will use unsigned ints
	//Here we are printing the space in the memory of all the types of numbers
	//and in the variables previously declared
	printf("The size of an int: %ld\n", sizeof(int));

	printf("The size of areas (int[]): %ld\n",sizeof(areas));

	printf("The number of ints in areas: %ld\n",sizeof(areas) / sizeof(int));

	printf("The first area is %d, the 2nd %d.\n",areas[0], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));

	printf("The size of name (char[]): %ld\n",sizeof(name));

	printf("The number of chars: %ld\n",sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld\n",sizeof(full_name));

	printf("The number of chars: %ld\n",sizeof(full_name) / sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n",name, full_name);

	return 0; //To see if everything goes well
}

/*
EXTRA CREDITS
1.- Try assigning to elements in the areas array with areas[0] = 100; and similar.
exercise08.c:7:17: warning: excess elements in array initializer
 int areas[0] = {100};
                 ^~~
2.- Try assigning to elements of name and full_name .
I can see that it is possible

3.- Try setting one element of areas to a character from name.
The element is saved in ASCII format in the memory and its printed as that format,
in my case I put “i” and prints 105

4.- Go search online for the different sizes used for integers on different CPUs.
32 bits CPU
unsigned short: 2, short: 2, unsigned int: 4, int: 4, unsigned long: 4, long: 4
64 bits CPU
unsigned short: 2, short: 2, unsigned int: 4, int: 4, unsigned long: 8, long: 8

*/
