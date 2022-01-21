#include <stdio.h>

int count(int a, int b){
    return a * b;
}

int main() {
    printf("Hello, World!\n");
    printf("w pierwszym branchu 2*3 = %d", count(2,3));
    return 0;
}
