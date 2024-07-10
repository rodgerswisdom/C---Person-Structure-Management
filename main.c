#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "main.h"


struct Person
{
    int *name;
    int age;
    int height;
    int weight;

};

struct Person *Person_Create(int *name,int age,int height,int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert( who != NULL);

    who -> name = strdup(name);
    who -> age;
    who -> height;
    who -> weight;

    return(who);
};

void Person_Destroy(struct Person *who );
void Person_Print(struct Person *who );


