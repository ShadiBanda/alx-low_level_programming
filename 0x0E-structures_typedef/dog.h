#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Information of the dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: More info of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
