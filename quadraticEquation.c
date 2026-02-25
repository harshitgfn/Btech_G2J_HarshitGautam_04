#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float root1,root2,realPart, imagePart, discriminant;

    printf("Enter coeffiecent a,b andc:");
    scanf("%d%f%f", &a,&b,&c);

    if(a==0)
    {
        printf("This is not a quadratic equation.\n");

    }
    discriminant=b*b-4*a*c;

    if (discriminant>0)
    {
        root1=(-b + sqrt(discriminant))/(2*a);
        root2=(-b - sqrt(discriminant))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f\n",root1);
        printf("Root2 = &.2f\n",root2);
    }
    else if(discriminant==0)
    {
        root1=-b/(2*a);
        printf("Roots are real and equal.\n");
        printf("Root1=Root2=%.2f\n",root1);
    }
    else
    {
        realPart=-b/(2*a);
        imagePart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and imaginary.\n");
        printf("Root1=%.2f+%.2fi\n",realPart, imagePart);
        printf("Root2=%.2f-%.2fi\n",realPart, imagePart);
    }
    return 0;
}
