#include<stdio.h> 
 
int main(int argc, char *argv[]) 
{ 
    int flag = 0; 
    char passwd[10];
    char test[383];
 
    memset(passwd,0,sizeof(passwd)); 

    printf("addr_flag %d\n", &flag); 
    printf("addr_passwd %d\n", &passwd);

    printf("test %d\n", &test);

    strcpy(passwd, argv[1]); 
 
    if(0 == strcmp("LinuxGeek", passwd)) 
    { 
        flag = 1; 
    } 
 
    if(flag) 
    { 
        printf("\n Password cracked flag: %d \n", flag); 
    } 
    else 
    { 
        printf("\n Incorrect passwd \n"); 
 
    } 
    return 0; 
} 
