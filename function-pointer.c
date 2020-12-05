#include<stdio.h>
void add(int a, int b){
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b){
    printf("subraction is : %d\n",a-b);
}
void mul(int a, int b){
    printf("Multiplication is : %d\n",a*b);
}
int main(int argc, char const *argv[])
{
    void(*func_ptr_arr[])(int, int) = {add,subtract,mul};
    unsigned int ch, a = 15, b = 10;
    printf("Enter choice: 0 for add,1 for subtrcation and 3 for multiplication");
    scanf("%d",&ch);
    if (ch>2) return 0;
    (*func_ptr_arr[ch])(a,b);
    return 0;
}
