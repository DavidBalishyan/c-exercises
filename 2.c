#include <stdio.h>

// Find the Maximum Number in an Array
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int max = arr[0];
  for (int i = 1; i <= (sizeof arr / sizeof arr[0]); i++) {
    if (max < arr[i]) max = arr[i];
  }

  printf("%d\n", max);
  return 0;
}
