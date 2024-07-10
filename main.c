#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "main.h"


struct Person
{
    char *name;
    int age;
    int height;
    int weight;

};

struct Person *Person_Create(char *name,int age,int height,int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert( who != NULL);

    who->name = strdup(name);
    who->age;
    who->height;
    who->weight;

    return(who);
};

void Person_Destroy(struct Person *who )
{
    assert( who != NULL);

    free( who->name );
    free( who );
}

void Person_Print(struct Person *who )
{
    assert( who != NULL);

    printf("Name: %s", who->name );
    printf("Age: %d", who->age );
    printf("Height: %d", who->height );
    printf("Width: %d", who->weight );
}

int main( int argc, char *argv[] )
{
    printf("Hello");

    return (0);
}


