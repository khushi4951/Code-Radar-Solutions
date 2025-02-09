#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    char name[50];
    char hob[50];
    scanf("%s %d %s", name,&a,hob);
    printf("Name: %s\nAge: %d\nHobby: %s\n",name,a,hob);
    return 0;
}