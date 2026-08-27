
// #include<stdio.h>
// int main()
// {
//      int i;
//      for(i = 1;i <= 10;i++)
//      {
//         if(i == 6){
//                     break;
//                   }    
//                printf("%d\n",i);
//      }         
//      printf("loop termineted\n");
//      return 0;

//  }



// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i = 1;i <= 10;i++)
//   {
//    if(i == 6){
//                continue;
//    }
//       printf("%d\n",i);  
//   }
// printf("loop termineted\n");
// return 0;
// }




#include<stdio.h>
int main()
{
   int num;
   printf("enter a number");
   scanf("%d\n",num);

   if(num < 0)
   goto negative;
   printf("enter a positive no\n");
  return 0;
   negative:
  printf("enter a negetive no\n");
  return 0;
}  
















