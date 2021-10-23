#include <stdio.h>
int addNumbers(int n);
int main() {
    int num;
    printf("Enter a positive integer N: ");
    scanf("%d", &num);
    printf("Sum of 1 to N is = %d", sumofN(num));
    return 0;
}

int sumofN(int n) {
    if (n != 0)
        return n + sumofN(n - 1);
    else
        return n;
}
