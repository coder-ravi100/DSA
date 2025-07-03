/*3. else-if Ladder*/
/*
if (condition1) {
    // Executes if condition1 is true
} else if (condition2) {
    // Executes if condition2 is true
} else if (condition3) {
    // Executes if condition3 is true
} else {
    // Executes if none of the above conditions are true
}

*/
#include<stdio.h>
int main()
{
    int marks;
    if (marks >= 90) {
    printf("Grade A");
} else if (marks >= 75) {
    printf("Grade B");
} else if (marks >= 60) {
    printf("Grade C");
} else {
    printf("Fail");
}

    return 0;
}

