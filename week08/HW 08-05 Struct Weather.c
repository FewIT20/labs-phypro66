#include <stdio.h>
#include <string.h>
 
struct Weather {
  char outlook[9]; // outlook{overcast,sunny,rain}
  int temperature;
  int humidity;
  char wind; // wind{T,F}
};
 
void playing_decision(struct Weather temp[], int number) {
  for (int i = 0; i < number; i++) {
    if (!strcmp("overcast", temp[i].outlook)) {
      printf("yes\n");
    } else if (!strcmp("rain", temp[i].outlook) && temp[i].wind == 'F') {
      printf("yes\n");
    } else if (!strcmp("sunny", temp[i].outlook) && temp[i].humidity <= 75.5) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }
}
 
int main() {
  int number;
  scanf("%d", &number);
  struct Weather temp[number];
  for (int i = 0; i < number; i++) {
    scanf("%s %d %d %c", &temp[i].outlook, &temp[i].temperature, &temp[i].humidity, &temp[i].wind);
  }
  playing_decision(temp, number);
  return 0;
}