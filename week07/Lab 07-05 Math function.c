#include <stdio.h>
 
double findMin(double array[], int size) {
    double temped = array[0]; 
    for (int i = 0; i < size; i++) {
        if (temped > array[i]) {
            temped = array[i];
        }
    }
    return temped;
}
 
double findAvg(double array[], int size) {
    double temped = 0; 
    for (int i = 0; i < size; i++) {
        temped += array[i];
    }
    return temped / size;
}
 
double findMax(double array[], int size) {
    double temped = array[0]; 
    for (int i = 0; i < size; i++) {
        if (array[i] > temped) {
            temped = array[i];
        }
    }
    return temped;
}
 
double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}
 
int main() {
    int time;
    scanf("%d", &time);
    double array[time];
    for (int i=0; i<time; ++i) {
        array[i] = getValue();
    }
    printf("%d Values\n", time);
    printf("Min: %.3lf\n", findMin(array, time));
    printf("Max: %.3lf\n", findMax(array, time));
    printf("Avg: %.3lf", findAvg(array, time));
    return 0;
}