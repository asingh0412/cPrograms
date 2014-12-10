//AmaninderSingh
// Pool puzzle intro to struct 
// Version 1, without structs


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;
};

/* Print out the catalog entry */
void catalog(struct fish f)
{
	printf("%sis a %s with %i teeth. He is %i\n",
	f.name , f.species, f.teeth, f.age );
}

/* Print the label for the tank */
void label(struct fish f)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", 
		f.name , f.species, f.teeth, f.age);
}

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	label(snappy);
	//catalog("Snappy",  "Piranha", 69, 4);
	//label("Snappy",  "Piranha", 69, 4);
	return 0;
}