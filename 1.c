#include <stdio.h>

// Find the Minimum number in an Array

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 0};
  int min = arr[0];
  for (int i = 0; i < (sizeof arr / sizeof arr[0]); i++) {
     if (arr[i] < min) min = arr[i];
  }

  printf("Minimum: %d\n", min);
  return 0;
}
