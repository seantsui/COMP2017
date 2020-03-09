- Make sure when initialising variables what you are setting it as

Strings can be initialised at the time of declaration like an array
    - they resemble an array of characters
    - all strings in C are null terminated('\0')
```
char myHobby[] = "rowing";
```
compiler can determine size by # of elements

# Try to imagine what the memory actually looks like when declaring and initialising variables

a pointer that is pointing to the area of the memory with the string, "POINTERS"
```
char *word = "POINTERS"
```

prints the address value that contains the variable count
```
printf("%d\n", &count);
```

An variable 'amt' in an address that contains a pointer to another address containing a floating point value
```
float * amt;
```

Moving through a string using pointers
```
while (*str != '\0')
    str++;
```

# whenever there is a variable with * , the value will be however much it takes an address of memory

- Interpretations of
```
int **data;
```
1. Pointer to pointer to single int value
2. Array of addresses that point to a single int
3. Address that points to one array of int values
4. Array of addresses that point to arrays of int values

Size of an address
```
 sizeof(void*)
```
