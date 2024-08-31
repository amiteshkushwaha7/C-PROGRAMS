#include<stdio.h>
int main()
{
    float CP,SP,P,L;
    printf("Enter Cost and Selling Price of Product");
    scanf("%f %f",&CP,&SP);
    if(SP>CP){
       P=((SP-CP)*100)/CP;
       printf("Profit=%.2f%%",P);
    }else if(CP>SP){
       L=(CP-SP*100)/CP;
       printf("Loss=%.2f%%",L);
    }else{
        printf("Percentage Profit or Loss is Equal");
    }
    return 0;
    

}