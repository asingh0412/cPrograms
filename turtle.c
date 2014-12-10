//AmaninderSingh
// Pool puzzle intro to struct 
// Version 2, 
// passing values by reference. vs passing by value 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	const char *name;
	const char *species;
	int age;
}turle;

void happy_birthday(turle *t)
{
	t->age = t->age +1; // or (*t).age
	printf("Happy Birthday %s! You are now %i years old!\n",
	t->name, t->age );
}

int main()
{
	turle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
	happy_birthday(&myrtle);
	printf("%s's age is now %i\n", myrtle.name, myrtle.age );
	return 0;
}