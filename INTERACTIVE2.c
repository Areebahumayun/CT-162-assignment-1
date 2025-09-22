#include<stdio.h>
int main()
   {
   int side_a;
   int side_b;
   int side_c;
   printf("Enter side a:");
   scanf("%d",&side_a);
   printf("Enter side b:");
   scanf("%d",&side_b);
   printf("Enter side c:");
   scanf("%d",&side_c);
   if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a) {
        printf("Valid triangle.\n");

        if (side_a == side_b && side_b == side_c) {
            printf("Equilateral triangle.\n");
        }
        else if (side_a == side_b || side_b == side_c || side_a == side_c) {
            printf("Isosceles triangle.\n");
        }
        else {
            printf("Scalene triangle.\n");
        }
    } else {
        printf("Not a valid triangle.\n");
    }
    
}
