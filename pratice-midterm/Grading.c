#include <stdio.h>
int main() {
    int total, midterm, final;
    scanf("%d", &total);
    scanf("%d", &midterm);
    scanf("%d", &final);
    total = total + midterm + final;
    if (total >= 80) {
        printf("A");
    } else if (total >= 75 && total <= 79) {
        printf("B+");
    } else if (total >= 70 && total <= 74) {
        printf("B");
    } else if (total >= 65 && total <= 69) {
        printf("C+");
    } else if (total >= 60 && total <= 64) {
        printf("C");
    } else if (total >= 55 && total <= 59) {
        printf("D+");
    } else if (total >= 50 && total <= 54) {
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}