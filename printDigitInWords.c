//C program to print digits of a number in words
#include<stdio.h>
#include<string.h>
#include<conio.h>
void printDigit(int digit);
        int main() {
        int reverse = 0, digit, num, rem;
        printf("Enter a positive Integer\n");
        scanf("%d", &num);
        /* reverse the input number */
        while (num) {
        rem=num%10;
        reverse = (reverse * 10) + rem;
        num /= 10;
        }
        num = reverse;
        while (num) {
        digit = num % 10;
        printDigit(digit);
        num = num / 10;
        }

        return 0;
}
  void printDigit(int digit){
        switch (digit) {
        case 0:
        printf("Zero ");
        break;
        case 1:
        printf("One ");
        break;
        case 2:
        printf("Two ");
        break;
        case 3:
        printf("Three ");
        break;
        case 4:
        printf("Four ");
        break;
        case 5:
        printf("Five ");
        break;
        case 6:
        printf("Six ");
        break;
        case 7:
        printf("Seven ");
        break;
        case 8:
        printf("Eight ");
        break;
        case 9:
        printf("Nine ");
        break;
  }
}
