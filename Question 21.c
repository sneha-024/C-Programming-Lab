#include <stdio.h>

int main() {
  int num, digit, count[10] = {0};
  printf("Enter a number: ");
  scanf("%d", &num);

  while (num > 0) {
    digit = num % 10;
    count[digit]++;
    num /= 10;
  }

  printf("Frequency of each digit in the given number:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d occurred %d times\n", i, count[i]);
  }

  return 0;
}
