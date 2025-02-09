#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    printf("Hexadecimal: %X\n",n);
    printf("Octal: %o\n", n);
    return 0;
}