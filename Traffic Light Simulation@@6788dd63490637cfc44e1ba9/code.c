// Your code here...
#include <stdio.h>
int main(){
	char col ;
    scanf("%c",&col);
    switch (col) {
        case "R": printf("Stop");break;
        case "Y": printf("Slow Down");break;
        case "G": printf("Go");break;
        default: printf("Invalid Input");break;
    }
	return 0;
}