#include<stdio.h> 
 
int main(void) 
{ 
    char *ptr = "Linux";
    char* ptr2 = "Linux"; 
    printf("\n [%c] \n",*ptr++); 
    printf("\n [%c] \n",*ptr); 
 


    printf(" [%c]",*ptr2);
    ptr2++;
    printf("[%c]",*ptr2);
    printf("\n");
    return 0; 
}
