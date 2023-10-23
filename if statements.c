#include <stdio.h>

int main() {
  int spursPosition = 4;
  if (spursPosition < 5) {
    printf("Excellent.");
  } else if (spursPosition > 5) {
    printf("Average.");
  } else {
    printf("Dismal.");
  }
  return 0;
}
