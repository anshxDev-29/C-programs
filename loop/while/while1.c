C Program: Sum of digits + Reverse number (using only while loops):-
  #include <stdio.h>

int main() {
    int n, temp, sum = 0, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        int digit = temp % 10;
        sum += digit;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", rev);
//We can also check if the number is palindrome or not
  if (n==rev) {
    printf("It is a palindrome number ") ;
  }
  else {
    printf (" It is not a palindrome number ") ;
  }
    return 0;
}
