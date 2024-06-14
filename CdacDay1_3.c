#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two float numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Check if the second number is zero
    if (num2 == 0) {
        printf("Error: Division by zero\n");
    } else {
        // Perform division and display result
        result = num1 / num2;
        printf("%.2f divided by %.2f is equal to %.2f\n", num1, num2, result);
    }

    return 0;
}

/*
int main()
{
    float num1,num2,result;
    printf("Enter the first no.");
    scanf("%f",&num1);
    printf("Enter the second no.");
    scanf("%f",&num2);
    if(num2==0){
        printf("error: divisionbt zero\n");
    }else{
        result=num1/num2:
        printf("%.2f divided by %.2f is equal to %.2f\n",num1,num2,result);
    }
return 0;
}
*/