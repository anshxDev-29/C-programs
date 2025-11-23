C-Program : For counting number of digits in number using while loop -
  #include <stdio.h>

int main() {
    int n;
    int count = 0;
  if (scanf("%d", &n) != 1) {
        return 1;
  }
    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n > 0) {
            n /= 10;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
