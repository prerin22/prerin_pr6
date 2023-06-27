#include <stdio.h>
 
 main()
{
   char string[50];
   int a=0;
   int b=1;
   int p;
   printf("Enter the String:\n");
   scanf("%s",& string);
 
   
   for (p=0; string[p] !='\0'; p++)
   {
    a++;
   }
 
   for (p=0; p<a/2; p++)
   {
      if (string[p]!= string[a-1-p])
      {
         b=0;
         break;
      }
   }
 
   if (b==1)
      printf("%s is a palindrome", string);
   else
      printf("%s is not a palindrome", string);
 
   
}
