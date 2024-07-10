```markdown
# Person Structure Management in C

This project demonstrates the creation, manipulation, and destruction of structures in C. The program defines a `Person` structure and provides functions to create, print, and destroy `Person` instances.

## Files

- `main.c`: Contains the implementation of the `Person` structure, functions to manage `Person` instances, and the `main` function.

## Structure Definition

The `Person` structure has the following fields:
- `name`: A string representing the person's name.
- `age`: An integer representing the person's age.
- `height`: An integer representing the person's height in centimeters.
- `weight`: An integer representing the person's weight in kilograms.

## Functions

### `struct Person *Person_Create(char *name, int age, int height, int weight)`

Creates a new `Person` instance, initializes it with the given values, and returns a pointer to it.

### `void Person_Destroy(struct Person *who)`

Frees the memory allocated for the `Person` instance.

### `void Person_Print(struct Person *who)`

Prints the details of the `Person` instance.

## Main Function

The `main` function demonstrates the following:
1. Creating three `Person` instances.
2. Printing the memory address and details of each instance.
3. Manipulating the data in one of the `Person` instances.
4. Destroying all `Person` instances to free allocated memory.

## How to Compile and Run

To compile the program, use the following command:

```sh
gcc -o person main.c
```

To run the compiled program, use the following command:

```sh
./person
```

## Example Output

```sh
Memory of P1 is at: 0x55a92b0d52a0
Name: Robert Odhiambo
Age: 21
Height: 61
Width: 60

Memory of P2 is at: 0x55a92b0d52d0
Name: Ridan Hawy
Age: 21
Height: 64
Width: 55

Memory of P3 is at: 0x55a92b0d5300
Name: Rodgers Hawona
Age: 21
Height: 67
Width: 61

Name: Robert Odhiambo
Age: 41
Height: 81
Width: 80
```

## Notes

- The program uses `malloc` to allocate memory for `Person` instances and `strdup` to duplicate the `name` string.
- The `assert` function is used to ensure that memory allocation is successful.
- After manipulating the data of a `Person` instance, the updated details are printed.
- All `Person` instances are properly destroyed to avoid memory leaks.
```

