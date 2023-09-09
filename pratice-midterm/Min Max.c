#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int array[count];
    //Assign the data to array;
    for (int i = 0; i < count; i++) {
        int temped;
        scanf("%d", &temped);
        array[i] = temped;
    }
    //Find the min number;
    int min = array[0];
    int max = array[0];
    for (int i = 0; i < count; i++) {
        if (min > array[i]) {
            min = array[i];
        }
        if (max < array[i]) {
            max = array[i];
        }
    }
    printf("%d\n", min);
    printf("%d", max);
    return 0;
}