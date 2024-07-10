#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

struct Person *Person_Create(int *name,int age,int height,int weight);
void Person_Destroy(struct Person *who );
void Person_Print(struct Person *who );

#endif // MAIN_H_INCLUDED
