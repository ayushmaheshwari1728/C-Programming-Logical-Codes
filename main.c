/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct listnode{
    
    int data;
    struct listnode *next;
};

typedef struct listnode list;

int multiplier=1;  // global variable used to multiply result progessively in conversion

int pow2(){    //it will return current 
    
    int num=multiplier;
    multiplier*=2;
    return num;
}

int calculate_decimal_value(list *head){  //recursive function to compute decimal value
    
    if(!head)
    return 0;
    
    if(!head->next)
    return head->data*pow2();
    
    return calculate_decimal_value(head->next)+head->data*pow2();
    
}


int main()
{
    //sample linked list
    list *head=(list *)malloc(sizeof(list));
    head->data=0;
    head->next=(list *)malloc(sizeof(list));
    head->next->data=0;
    head->next->next=(list *)malloc(sizeof(list));
    head->next->next->data=1;
    head->next->next->next=(list *)malloc(sizeof(list));
    head->next->next->next->data=1;
    head->next->next->next->next=NULL;
    
    
    
    int result=calculate_decimal_value(head);
    
    printf("\nComputed value = %d ",result);

    return 0;
}
