/*3. else-if Ladder*/
/*if (condition1) {
    if (condition2) {
        // Executes if both condition1 and condition2 are true
    } else {
        // Executes if condition1 is true but condition2 is false
    }
} else {
    // Executes if condition1 is false
}
*/
#include<stdio.h>
int main()
{
    int a,b,c;
   if (a > b) {
    if (a > c) {
        printf("a is largest");
    } else {
        printf("c is largest");
    }
} else {
    if (b > c) {
        printf("b is largest");
    } else {
        printf("c is largest");
    }
}

    return 0;
}
