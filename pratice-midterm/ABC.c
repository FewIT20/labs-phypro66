#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int nums[3] = {num1, num2, num3};
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    char str[4]; // Increased array size to accommodate null terminator
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A') {
            printf("%d ", nums[0]);
        } else if (str[i] == 'B') {
            printf("%d ", nums[1]);
        } else if (str[i] == 'C') {
            printf("%d ", nums[2]);
        }
    }

    return 0;
}
