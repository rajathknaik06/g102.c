/*Emma is studying logarithmic identities for her math assignment. Write a program to help Emma that checks the identity log(a*b) = log(a) + log(b). 



Prompt the user to input values for 'a' and 'b', then determine whether the identity holds using the log() function and output the message.

Input format :
The input consists of two space-separated double-values a and b.

Output format :
The output prints "Identity holds." if log(a*b) = log(a) + log(b) holds.

Otherwise, the output prints "Identity does not hold."



Refer to the sample output for the formatting specifications. */

// You are using GCC
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    scanf("%1f %1f",&a,&b);
    
    if(fabs(log(a*b)-(log(a)+log(b)))<0.000001)
    {
        printf("Identity holds.\n");
        
    }
    else
    {
        printf("Identity does not hold.\n");
    }
    return 0;
}
