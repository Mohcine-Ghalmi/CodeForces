#include <stdio.h>

int is_lucky(long long n) {
  while (n > 0) {
    if (n % 10 != 4 && n % 10 != 7) {
      return 0;
    }
    n /= 10;
  }
  return 1;
}

int is_nearly_lucky(long long n) {
  int count = 0;
  while (n > 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      count++;
    }
    n /= 10;
  }
  return is_lucky(count);
}

int main() {
  long long n;
  scanf("%I64d", &n);

  if (is_nearly_lucky(n)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
