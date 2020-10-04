/*In this program we will print
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/

 #include<stdio.h>
 void main()
  {int n;
  char a= 'A';
  printf("enter the number of rows:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<i;j++)
  {
   printf("%c",a+j);
   }
   for(int k=i;k>=0;k--)
    { printf("%c",a+k);
   }


   printf("\n");}

 }

