#include<stdio.h>
int main () {
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    if (n%2==0) {
    printf("Even number");
    }
    //if (n%2!=0){          
    //printf("Odd number"); 
    else{ // the short form of the above two lines would be just write "else"
        printf("Odd number");
    }
    return 0;
}