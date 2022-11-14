#ifndef MAIN_H
#define MAIN_H
/**
*struct dog - str for dogs
*@name: name
*@age: age
*@owner: owner
*Description: this is the structur for dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
