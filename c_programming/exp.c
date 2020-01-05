#include<stdio.h>
#include<math.h>
#define PI 3.1415

void main()
{
    FILE *fp;
    float d,r,A,P;
    printf("Enter a Diameter : ");
    scanf("%f",&d);
    r = d/2;
    A = PI*(pow(r,2));     //PI*r*r;
    P = 2*PI*r;
    printf("Diameter = %.2f\nRadius = %.2f\nArea = %.2f\nPerimeter = %.2f",d,r,A,P);
    fp = fopen("exp.txt","a");
    fprintf(fp,"%.2f\t%.2f\t%.2f\t%.2f\n",d,r,A,P);
    fclose(fp);
}












//fprintf(fp,"%f\t%f\t%f\t%f\n",d,r,A,P);
