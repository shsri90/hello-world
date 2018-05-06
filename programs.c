/*************************************************************************
* 1. Program to find the frequency of a particular character in a string *
*************************************************************************/
#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
  char str[MAX_LEN], ch;
  int i, freq = 0;

  printf("Enter a string: ");
  gets(str);
  printf("\nEnter a character whose frequency is to be found: ");
  scanf("%c", &ch);

  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == ch)
      freq++;
  }
  printf("Frequency of \"%c\" in \"%s\" is: %d\n", ch, str, freq);

  return 0;
}


/*******************************************************
* 2. C Program to check if string is palindrome or not *
*******************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void)
{
  char str[MAX_LEN];
  int low_ctr = 0, high_ctr;

  printf("Enter a string: ");
  scanf("%s", str);

  high_ctr = strlen(str) - 1;

  while(low_ctr < high_ctr)
  {
    if(str[low_ctr++] != str[high_ctr--])
    {
      printf("\"%s\" is not a palindrome.\n", str);
      return 0;
    }
  }
  printf("\"%s\" is a palindrome.\n", str);
  return 0;
}


/*********************************************************
* 3. C program to check if a number is palindrome or not *
*********************************************************/
#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}


/****************************************************
* 4. C program to check if a number is prime or not *
****************************************************/
#include <stdio.h>

int main(void)
{
  int num, i, flag=0;

  printf("Enter a number: ");
  scanf("%d", &num);

  if(num == 1)
  {
    printf("1 is neither prime nor composite!\n");
    return 0;
  }

  for(i = 2; i < num/2; i++)
  {
    if(num%i == 0)
    {
      flag = 1;
      break;
    }
  }
  if(flag == 1)
    printf("%d is not a prime number.\n", num);
  else
    printf("%d is a prime number.\n", num);
  return 0;
}


/****************************************
* 5. Count number of digits in a number *
****************************************/
#include <stdio.h>
int main()
{
    long long num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(n != 0)
    {
        n /= 10;
        count++;
    }

    printf("Number of digits in %lld: %d", num, count);
}


/**************************************************
* 6. Check if a number is Armstrong number or not *
**************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, remainder, result = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &number);

     originalNumber = number;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);

    return 0;
}


/*************************************************
* 7. Convert a binary number to a decimal number *
*************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
  long long num;
  int i=0, rem, decNum=0;

  printf("Enter a binary number: ");
  scanf("%lld", &num);

  while(num != 0)
  {
    rem = num%10;
    num /= 10;
    decNum += rem*pow(2, i);
    i++;
  }
  printf("Number in decimal is: %d\n", decNum);
  return 0;
}

/***********************************************
* 8. Convert a decimal number to binary number *
***********************************************/
#include <stdio.h>

int main(void)
{
  int num;
  int i=1, rem;
  long long binNum=0;

  printf("Enter a decimal number: ");
  scanf("%d", &num);

  while(num != 0)
  {
    rem = num%2;
    num /=2;
    binNum += rem*i;
    i *= 10;
  }
  printf("Number in binary is: %lld\n", binNum);
  return 0;
}
