#include<stdio.h>
//printing the complete table of 5 
int main(){
    int n = 1;
    int product = 1;
    int table;
    printf("enter the table to be printed : ");
    scanf("%d",&table);
    while(n <= 10){
          product = table * n ;
          printf(" %d x %d = %d\n",table,n,product);
             n++ ;}
          return 0;
          }