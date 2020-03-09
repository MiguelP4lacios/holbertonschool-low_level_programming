#ifndef DOGH
#define DOGH
/**
  * struct dog - Data group of a dog
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /*DOGH*/
