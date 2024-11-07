#include <stdio.h> 

int main(void)
{
    double area;
    double sumS = 0.0;
    int countS = 0;
    double e1, e2, e3;
    printf("Please enter first side to a traingle: \n");
    scanf(" %lf", &e1);
    printf("Please enter second side to a traingle: \n");
    scanf(" %lf", &e2);
    printf("Please enter third side to a traingle: \n");
    scanf(" %lf", &e3);
    while(e1 != 0.0 && e2 != 0.0 && e3 != 0.0)
    {
        printf("e1:%lf", e1);
        printf(" e2:%lf", e2);
        printf(" e3:%lf", e3);
        if(e1 + e2 > e3 && e1 + e3 > e2 && e2 + e3 > e1)
        {
            if(e1*e1 + e2*e2 == e3*e3)
            {
                area = (e1 * e2)/2;
                sumS += area;
                countS += 1;
                printf("The Sides you gave make a right traingle and its area is: %.2f\n", area);
            }
            else if(e3*e3 + e2*e2 == e1*e1)
            {
                area = (e3 * e2)/2;
                sumS += area;
                countS += 1;
                printf("The Sides you gave make a right traingle and its area is: %.2f\n", area);
            }
            else if(e1*e1 + e3*e3 == e2*e2)
            {
                area = (e1 * e3)/2;
                sumS += area;
                countS += 1;
                printf("The Sides you gave make a right traingle and its area is: %.2f\n", area);
            }  
            else
            {
                printf("The sides you gave make a traingle\n");
            }
        }
        else
        {
            printf("the 3 numbers cannot be a traingle\n");
        }
        printf("Please enter first side to a traingle: \n");
        scanf("%lf", &e1);
        printf("Please enter second side to a traingle: \n");
        scanf("%lf", &e2);
        printf("Please enter third side to a traingle: \n");
        scanf("%lf", &e3);
    }
    printf("the sum of the traingles %lf",sumS);
    printf(" and the average area of the traingles is %lf",sumS/countS);
    return 0;
}