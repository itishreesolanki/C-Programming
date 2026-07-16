#include<stdio.h>
int main(){
int x;
	float a,b;
	printf("\tSelect the opersation");
	printf("\n1. Addition");
	printf("\n2. Subraction ");
	printf("\n3. Multplication");
	printf("\n4. Division");
	printf("\nEnter your Choice : ");
	scanf("%d",&x);
	printf("\nEnter two numbers :");
	scanf("%f%f",&a,&b);
	switch(x){
	case 1:
    printf("Result = %.2f",a+b);
    break;
    
    case 2:
    printf("Result = %.2f",a-b);
    break;
     
    case 3:
    printf("Result = %.2f",a*b);
    break;
    
	case 4:
	if (b!=0){
	printf("Result = %.2f",a/b);
    }
    else
{
	printf("Division by zero is not Allowded");
}
    break;
    
	default:
	printf("Invalid choice ! ");
			
	}
	return 0;
}
	
