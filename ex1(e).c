#include<stdio.h> 
int main() 
{ 
    int num; 
    float fnum; 
    char ch; 
    char str[50]; 
 
    // Reading from stdin 
    printf("Enter an integer: "); 
    scanf("%d", &num); 
 
    printf("Enter a float value: "); 
    scanf("%f", &fnum); 
 
    printf("Enter a character: "); 
    scanf(" %c", &ch);   // space before %c to skip newline 
 
    printf("Enter a string: "); 
    scanf("%s", str);    // reads string (no spaces) 
 
    // Writing to stdout 
printf("\n--- Output ---\n"); 
printf("Integer: %d\n", num); 
printf("Float: %.2f\n", fnum); 
printf("Character: %c\n", ch); 
printf("String: %s\n", str); 
return 0; 
} 

