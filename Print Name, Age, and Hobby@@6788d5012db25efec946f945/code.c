#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    char name[100], hob[100];
    scanf("%d %c %c", &a,&name,&hob);
    printf("Name: %c\n Age: %d\n Hobby: %c\n",name,a,hob);
    return 0;
}