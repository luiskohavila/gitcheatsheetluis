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
// WARNING: On some systems you may have to change the
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
