#include <stdio.h>

int main() {
  float x;
  printf("Enter a number : ");
  scanf("%F", & x);
  if ((x >= 0) && (x <= 25)) {
    printf("the number is between interval [0,25]");
  } else
  if ((x >= 25) && (x < 50)) {
    printf("the number is between interval [25,50)");

  } else
  if ((x >= 50) && (x < 75)) {
    printf("the number is between interval [50,75)");
  } else
  if ((x >= 75) && (x < 100)) {
    printf("the number is between interval [75,100)");
  } else {
    printf("out of intervals ");

  }

  return 0;
}
