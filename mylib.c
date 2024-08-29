#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define max_size 100

//<=================================>to print Array with Index <================================>//

void printArrayWithIndex(int arr[],int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++)
        printf("arr[%d]\t : %d\n",i,arr[i]);
    printf("\n");
}
//<-------------------------------- End of program -------------------------------->//
/*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
*/
//<=================================> to print an array <================================>//

void  printArray(const void * array ,int type, int size){
    for(int i = 0 ; i < size ; i++){
        if(type==0){
            printf("%d ",((int*)array)[i]);
        }
        else if(type==1){
            printf("%c ",((char*)array)[i]);
        }
        else if(type==2){
            printf("%s \n",((char**)array)[i]);
        }
    }
    printf("\n");
}

void print2dArray(int *arr, int row, int col) {
    for (int i = 0; i < row * col; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // New line after printing all elements
}
//<-------------------------------- End of program -------------------------------->//
/*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
*/
//<=================================>binary to decimal <================================>//
int b_d(int number){
    int base=1,dec=0;
    while(number!=0){
        dec+=(number%10)*base;
        number/=10;
        base*=2;
    }return dec;
    printf("\n");
}
//<=================================>decimal to binary <================================>//
int d_b(int number){
    int base=1,bi=0;
    while(number!=0){
        bi+=(number%2)*base;
        number/=2;
        base*=10;
    }return bi;
    printf("\n");
}
//<-------------------------------- End of program -------------------------------->//
/*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
*/
//<=================================>in place swap <================================>//
void swp(int *a, int *b) {
    int t=(*a);
    (*a)=(*b);
    (*b)=t;
}
void swpc(char *a, char *b) {
    char t=(*a);
    (*a)=(*b);
    (*b)=t;
}
//<-------------------------------- End of program -------------------------------->//
/*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
*/
//<=================================>to fill the array <================================>//
void toFilArray(int array[], int size){
    for(int i=0;i<size;i++){
        array[i]=1+i;
        printf("%d",array[i]);
    }
    printf("\n");
}

void toSee(const void * array,int type,int size,int target){
    printArray(array,type,size);
    char * ar = malloc(size*2*sizeof(char));
    for(int i=0;i<size*2;i++){
        ar[i]='^';
        if(i==target+target){ 
            printf("%c",ar[i]);
        }
        // else if(i==(target+target-1)){
        //     printf(" ");
        // }
        else{
            printf(" ");
        }
    }
}
//<=================================>stack <================================>//

typedef struct {
    int array[max_size];
    int top;
}Stack;
Stack stack;


void Stack_initialize(){
    stack.top=-1;
}

void push(int number){
    if(stack.top==max_size-1){
        printf("stack overflow!\n");
    }
    else
        stack.array[++stack.top]=number;
}
int pop(){
    if(stack.top==-1){
        printf("stack underflow!\n");
        return -1;
    }
    stack.array[stack.top]=0;
    return stack.array[--stack.top];
}
int peek(){
    if(stack.top==-1){
        printf("stack is empty!\n");
        return -1;
    }
    return stack.array[stack.top];
}
//<-------------------------------- End of program -------------------------------->//
/*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
*/
//<=================================>compare for ascending <================================>//
int cmpa(const void * a, const void*b){
    return (*(int*)a - *(int*)b);
}
int cmpd(const void * a, const void*b){
    return (*(int*)b - *(int*)a);
}
//<-------------------------------- End of program -------------------------------->//
/*
                                            -
                                            |
                                            |
                                            |
                                            |
                                            -
*/
//<=================================>to find max and min of array <================================>//
// int max(int*nums,int size){
//     int max=0;
//     for(int i=0;i<size;i++){
//         if(max<nums[i]) max=nums[i];
//     }
//     return max;
// }
int min(int*nums,int size){
    int min=0;
    for(int i=0;i<size;i++){
        if(min<nums[i]) min=nums[i];
    }
    return min;
}