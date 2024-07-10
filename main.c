#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


struct Person
{
    int *name;
    int age;
    int height;
    int weight;

};

struct Person *Person_Create(int *name,int age,int height,int weight);
void Person_Destroy(struct Person *who )
