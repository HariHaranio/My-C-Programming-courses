# Important problems

### Problem: Check if a number is odd or even without using the modulus operator and if conditional statements.
```c
compile time solution using bitwise operator
int main(){
    int x = 5;
    (x & 1) ? printf("Odd") : printf("Even");
    return 0;
}
```

###