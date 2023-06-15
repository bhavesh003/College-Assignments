// *** Assignment 1 ***


//Q.1] Write C Program to display ASCII value of vowels.

#include <stdio.h>
int main()
{
    char a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
    printf("ASCII value of vowels \na=%d\ne=%d\ni=%d\no=%d\nu=%d\n", a, e, i, o, u);
    return 0;
}

//Q.2] Write C Program to check whether given character is vowel or consonant.

#include <stdio.h>
int main()
{
    char n;
    printf("Enter the character = ");
    scanf("%c", &n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    printf("%c is vowel", n);
    else printf("%c is consonant", n);
    return 0;
}

//Q.3] Accept two numbers X,Y from the user and find their integer divison, exact divison and remainder.

#include <stdio.h>

int main()
{
    float X, Y;
    printf("The value of X is ");
    scanf("%f", &X);
    printf("The value of Y is ");
    scanf("%f", &Y);
    printf("Integer Divison is %d\n", ((int)X / (int)Y));
    printf("Exact Divison is %f\n", X / Y);
    printf("Remainder is %d", ((int)X % (int)Y));
    return 0;
}

//Q.4] Write a 'C' program to accept an integer. Display its square on the first line. Cube on the second line and square root on the third line.

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter the integer value = ");
    scanf("%d", &a);
    printf("The square is %d\n", a * a);
    printf("The cube is %d\n", a * a * a);
    float b = sqrt(a);
    printf("The squart root is %f", b);
    return 0;
}
//Q.5] Write C Program to accept character from a keyboard and display its previous and next character in order.

#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character = ");
    scanf("%c", &a);
    printf("Previous character is %c\n", a - 1);
    printf("Next character is %c", a + 1);
    return 0;
}
//Q.6] Write a program to accept a number and check if is divible by 5 and 7

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {printf("%d is divisible by 5\n", n);}
    else if (n % 7 == 0)
    {printf("%d is divisible by 7", n);}
    else
    {printf("%d is not divisible by 5 and 7", n);}

    return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character\n");
    scanf("%c", &ch) ;
    if((ch >= 'a' && ch <= 'z') ||  (ch >= 'A' && ch <= 'Z') )
    {
    
           if(ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
           {
             printf("%c is a vowel\n",ch);

           }
           else {
                  printf("%c is consonant\n",ch);
           }

    } else {
 
               printf("%c it may be special character and numbers\n", ch);
    }

return 0;

}