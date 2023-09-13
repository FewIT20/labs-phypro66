#include <stdio.h>

#define MXN 210

int main() {
  char str1[MXN], str2[MXN];
  scanf("%s %s", str1, str2);
  int mx = 0, st1;
  for (int i = 0; str1[i] != '\0'; i++) {
    for (int j = 0; str2[j] != '\0'; j++) {
      int cnt = 0;
      for (int k = 0; str1[i + k] != '\0' && str2[j + k] != '\0'; k++) {
        if (str1[i + k] == str2[j + k]) {
          cnt++;
        } else {
          break;
        }
      }
      if (cnt > mx) {
        mx = cnt;
        st1 = i;
      }
    }
  }
  for (int i = 0; i < mx; i++) {
    printf("%c", str1[st1 + i]);
  }
}