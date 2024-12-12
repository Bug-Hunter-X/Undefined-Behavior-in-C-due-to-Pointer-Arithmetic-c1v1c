#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d\n", x);  // The corrected version; output is 20
  return 0;
}
/* Additional notes: this example is simplified. Real-world scenarios might involve more complex data structures and pointer manipulations, making memory boundary errors harder to detect and debug.*/