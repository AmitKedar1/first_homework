#include <stdio.h> 
#include <stdbool.h>

bool IsTraingle(double first_triangle_side, double second_triangle_side, double third_triangle_side)
{
    return first_triangle_side + second_triangle_side > third_triangle_side && first_triangle_side + third_triangle_side > second_triangle_side && second_triangle_side + third_triangle_side > first_triangle_side;
}

bool IsRightTriangle(double first_triangle_side, double second_triangle_side, double third_triangle_side)
{
    return first_triangle_side*first_triangle_side + second_triangle_side*second_triangle_side == third_triangle_side*third_triangle_side;
}

int main(void)
{
    double area_of_traingle = 0 ;
    double sum_of_area = 0;
    int count_right_traingle = 0;
    double first_triangle_side = 0;
    double second_triangle_side = 0;
    double third_triangle_side = 0;
    double avg_area = 0;

    printf("Please enter first side to a traingle: \n");
    scanf(" %lf", &first_triangle_side);
    printf("Please enter second side to a traingle: \n");
    scanf(" %lf", &second_triangle_side);
    printf("Please enter third side to a traingle: \n");
    scanf(" %lf", &third_triangle_side);

    while(first_triangle_side != 0.0 && second_triangle_side != 0.0 && third_triangle_side != 0.0)
    {
        if(IsTraingle(first_triangle_side,second_triangle_side,third_triangle_side))
        {
            if(IsRightTriangle(first_triangle_side, second_triangle_side, third_triangle_side))
            {
                area_of_traingle = (first_triangle_side * second_triangle_side)/2;
                sum_of_area += area_of_traingle;
                count_right_traingle += 1;
                printf("The Sides you gave make a right traingle and its area is: %.2f\n", area_of_traingle);
            }
            else if(IsRightTriangle(third_triangle_side, second_triangle_side, first_triangle_side))
            {
                area_of_traingle = (third_triangle_side * second_triangle_side)/2;
                sum_of_area += area_of_traingle;
                count_right_traingle += 1;
                printf("The Sides you gave make a right traingle and its area is: %.2f\n", area_of_traingle);
            }
            else if(IsRightTriangle(first_triangle_side,third_triangle_side,second_triangle_side))
            {
                area_of_traingle = (first_triangle_side * third_triangle_side)/2;
                sum_of_area += area_of_traingle;
                count_right_traingle += 1;
                printf("The Sides you gave make a right traingle and its area is: %.2f\n", area_of_traingle);
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
        scanf("%lf", &first_triangle_side);
        printf("Please enter second side to a traingle: \n");
        scanf("%lf", &second_triangle_side);
        printf("Please enter third side to a traingle: \n");
        scanf("%lf", &third_triangle_side);
    }
    printf("the sum of the traingles %lf",sum_of_area);
    avg_area = sum_of_area/count_right_traingle;
    printf(" and the average area of the traingles is %lf",avg_area);
    return 0;
}