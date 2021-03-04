#include<stdio.h>

int main()

{
float mark;
 printf("Enter your mark:");
 scanf("%f",mark);

 if(mark>60&&mark<100)
 printf("Congratulations! You have secured FIRST DIVISION!");

 else if(mark>=45)
 printf("You have secured SECOND DIVISION");

 else if (mark>=33)
 printf("Congratulations! You have secured THIRD DIVISION");

 else if(mark<33)
 printf("SORRY! You are FAILED!");

 else
 printf("Number you've given isn't valid!");

 return 0;

 }

