#include <stdio.h>

// Count the Occurrences of a Value in an Array

int main() {
  int arr[] = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};
  int count = 0;
  int to_find = 5;
  for (int i = 1; i <= (sizeof arr / sizeof arr[0]); i++) {
      if (arr[i] == to_find) count++;
  }
  printf("%d\n", count);
  return 0;
}
