#include <stdio.h>
#include <stdbool.h>
int main()
{
    int count = 1;
    bool stop = false;
    int age_20_plus_and_height_160_plus = 0;
    int age_20_below_and_height_180_below_or_weight_60_below = 0;
    int age_30_plus_and_weight_40_to_80_range = 0;
    int age_40_below_and_weight_85_below_or_height_200_below = 0;
    int Age, Height, Weight = 0;
    int total_age = 0;
    double total_height, total_weight;
    while (!stop) {
        if (count == 50) {
            stop = true;
        }
        scanf("%d %d %d", &Age, &Height, &Weight);
        if (Age >= 20 && Height >= 160) {
            age_20_plus_and_height_160_plus++;
        } else if (Age < 20 && (Height <= 180 || Weight >= 60)) {
            age_20_below_and_height_180_below_or_weight_60_below++;
        } 
        if (Age >= 30 && Weight >= 40 && Weight <= 80) {
            age_30_plus_and_weight_40_to_80_range++;
        } 
        if (Age < 40 && (Weight < 85 || Height <= 200)) {
            age_40_below_and_weight_85_below_or_height_200_below++;
        }
        total_age += Age;
        total_height += Height;
        total_weight += Weight;
        count++;
    }
    printf("Age >= 20 and Height >= 160: %d\n", age_20_plus_and_height_160_plus);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", age_20_below_and_height_180_below_or_weight_60_below);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", age_30_plus_and_weight_40_to_80_range);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", age_40_below_and_weight_85_below_or_height_200_below);
    printf("Average Age: %d\n", total_age/50);
    printf("Average Height: %.2lf\n", (total_height/50));
    printf("Average Weight: %.2lf\n", total_weight/50);
    return 0;
}