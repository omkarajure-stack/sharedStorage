//loop

// #include<stdio.h>
// int main()
// {
//  int i = 1;
//  while(i <= 5){
//                  printf("%d\n",i);
//                  i++;
                  
//               }
//        return 0;

// }


// #include<stdio.h>
// int main()
// {
//    int i = 10;
//    do{
//         printf("%d\n",i);
//         i++;   
//     } while(i <= 100);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
    
//     for(int i = 10;i >= 11;i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }  



//nested loop


// #include<stdio.h>
// int main()
// {   
//     int i = 1;
//     while(i <= 3){
//                         int j = 1;
//                         while(j <= 3){
//                                               printf("%d %d\n", i,j);
//                                               j++;
//                                       }
//                                       i++;
//                 }
//           return 0;

//}


//   #include<stdio.h>
//   int main()
//   {   
//      int i = 1;
//      do{
//            int j = 1;
//            do{
//                 printf("%d %d\n",i,j);
//                 j++;
//             }
//                while(j <= 3);
//                i++;
//              }    while(i <= 3);      
//            return 0;


//    }





//   #include<stdio.h>
//   int main()
//   {
//       int i,j;
//       for(int i = 1;i <= 4;i++)
//       {  
//          for(int j = 1;j <= 4;j++)
//          {
//             printf("%d %d\n",i,j);
//          }
         

//       }
//       return 0;

//   }




// #include<stdio.h>
// int main()
// {
//   int i,j;
//   for(int i = 1;i <= 4;i++)
//   {
//    for(int j = 1;j <= 4;j++)
//    {
//       printf("*");
//    }
//    printf("\n");
//   }
// return 0;

// }



// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(int i = 4;i >= 1;i--)
//     {
//      for(int j = 1;j <= 1; j++)
//       {
//       printf("*");
//       }
    
//     printf("\n");
//    }
// return 0;



// }




// #include<stdio.h>
// int main()
// {
  
//      int i, j;
//      for(int i = 1;i <= 4;i++)
//       {
//           for(int j = 1;j <= i; j++)
//           {
//             printf("*");
          
//           }

//           printf("\n");

//       }
//    return 0;

// }




#include<stdio.h>
int main()
{
for(int i = 1;i <= 4;i++){
{
  for(int j = 1;j <= i;j++)
  printf(" ");
}
for(int j = 1;j <= i;j++)
{
   printf("*");
}
printf("\n");
}
return 0;

}