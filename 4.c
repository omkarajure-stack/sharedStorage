
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
//    int num;
//    printf("enter a number");
//    scanf("%d\n",num);

//    if(num < 0)
//    goto negative;
//    printf("enter a positive no\n");
//   return 0;
//    negative:
//   printf("enter a negetive no\n");
//   return 0;
// }  



// 2 continue

//  #include<stdio.h> 
//  int main()
//  {
//    for(int i = 0;i <= 10;i++)
//      {
//        if(i == 3){
//                    continue;
//                  }
//                  else if(i == 6){
//                                    continue;
//                                  }
//                                  printf("%d\n", i);
                 
//      }
//      return 0;
//  }



//  #include<stdio.h>
//  int main()
//  {
//    for(int i = 1;i <= 20;i++)
//    {
//      if(i == 13){
//        break;
//      }
//      printf("%d\n",i);
//    }
//  }


// #include<stdio.h>
// int main()
// {
//   for(int i = 10;i >= 1;i--)
//   {
//     if(i == 5){
//                   continue;
//                }
//                printf("%d\n",i);
//               }            
              
//                return 0;
  
// }



// even no. print 

// #include<stdio.h> 
// int main()
// {
//     for(int i = 10;i >= 1;i--)
//     {
//       if(i % 2 != 0){
//         continue;
//       }
//       printf("%d\n",i);

//     }
//     return 0;
// }





// odd no print


// #include<stdio.h> 
// int main()
// {
//   printf("odd no\n");
//     for(int i = 10;i >= 1;i--)
//     {
      
//       if(i % 2 == 0){
//         continue;
//       }
//       printf("%d\n",i);

//     }
    
//     return 0;
// }



// 1 to 30  5 continue

// #include<stdio.h> 
// int main()
// {
//   for(int i = 1;i <= 30;i++)
//   {
//     if( i % 5 == 0){
//                       continue;
//                    }
//                    printf("%d\n",i);
//   }
//   return 0;
// }


// target found 40s to 37

// #include<stdio.h>
// int main()
// {
//   printf("target found at 37 !\n");
//   for(int i = 1;i <= 40;i++)
//   {
//     if(i == 38){
//       break;
//     }
//     printf("%d\n",i);
  
//   }
//   return 0;
// }




// break an continue combinatio

// #include<stdio.h>
// int main()
// {
//   for(int i = 1;i <= 20;i++)
//   {
//     if(i == 16)
//     {
//       break;
//     }
//      if(i % 3 == 0);
//     {
//       continue;
//     }
//     printf("%d\n",i);
//   }
//   return 0;
// }




#include<stdio.h>
int main()
{
  
  for(int i = 10;i >= 1;i--)
  {
    if(i == 1){
                 break;
              }
              printf("%d\n", i);
  }
  printf("boom..! bomb blast\n");
  return 0;
}