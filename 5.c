//  #include<stdio.h>
//  int main()
//  {

//   int i;
//   int marks[4] = {1,2,3,4};
//   printf("one D array\n");
//   for(i=0;i<4;i++)
//   {
//      printf("%d     ",marks[i]);
//   }

//   return 0;





// }



//  #include<stdio.h>
//  int main()
//  {

//  int a[3][2]={
//                   {1,2,},
//                   {4,5,},
//                   {7,8,}
//  };

//  int i,j;

//  printf("printing elments\n");
//  for(i=0;i<3;i++)
//  {
//      for(j=0;j<2;j++)
//      {
//          printf("%d\t",a[i][j]);
//      }
//      printf("\n");
//  }
//  return 0;


//  }







// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("[%d][%d]",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }


//     printf("printing elements\n");
//     for(i=0;i<3;i++)
//     {
//         printf("\n");
//         for(j=0;j<3;j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//     }
//        return 0;

//}



// arrays no.slot sum



// #include<stdio.h>
// int main()
// {
//     int sum = 0;
//     int a[5] = {2,4,6,8,8};

//     for(int i = 0;i < 5;i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("total sum = %d\n",sum);
//     return 0;
// }




// array no.dhundna

// #include<stdio.h>
// int main()
// {
//     int arr[5] = { 15, 8, 42,19, 10};

//     int key = 42;
//     if(key == arr[0])
//     {
//         printf("0\n");
//     }
//     else if(key == arr[1]){
//                              printf("1\n");
//                            }
//                            else if(key == arr[2]);
//                            {
//                             printf("2\n");
//                            }
//                            return 0;
// }





//bda no. mang

// #include<stdio.h>
// int  main ()
// {
   
//     int a[5] = {10, 20, 30, 40, 50}; 
//     int max = a[0];

//     for(int i = 1; i < 5;i++)
//     {
//         if(a[i] > max)
//         {
//           max = a[i];    
//         }

//     }
//     printf("the largest no%d\n", max );
//     return 0;
// }





// bda no. dhund re baba..! vo bhi user re bhik mang ke

// #include<stdio.h>
// int main()
// {
//       int a[5];

//     for(int i = 0;i < 5;i++)
//     {
//               scanf("%d\n",&a[i]);
//     }
//    int max = a[0];
//     for( int i = 1;i < 5; i++)
//     {

//         if(a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("find largest no  %d\n",max);
    
//     return 0;
// }




// chota no dhund


// #include<stdio.h>
// int main()
// {
    
//     int a[5];
//     for(int i = 0;i < 5;i++)
//     {
//     scanf("%d\n", &a[i]);
//     }
//     int m = a[0];
//     for (int i = 1; i < 5;i++)
//     {
        
//      if(a[i] < m)
//         {
//             m = a[i];
//         }
//     }
//     printf("small no.%d\n", m);
//   return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int i,j;
//   int sum = 0;
//   int a[2][2] = {
//     {1,2},{3,4}
//   };
//      for(int i = 0;i < 2;i++)
//      {
//         for(int j = 0;j < 2;j++)
//         {
//             sum = sum + a[i][j]; 
//         }
//      }   
//      printf("total sum = %d\n",sum);
//      return 0;
// }



#include<stdio.h>
int main()
{
    int i,j;
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            printf("%d\t",a[j][i]);
        }
    
    printf("\n");
    }
     return 0;
}



























