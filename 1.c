  // conditional statement{if/if else/if else if)


// #include<stdio.h>
// int main()
// {
        // if

//     if(10 < 5){
//                              printf(" a grether than 5 ");

//               }
//              return 0;
// }

//  #include<stdio.h>
//  int main()
//  {

//         // if else

//      if(10 > 7){
//                    printf("10 grether than 7");
//                }
          
          
//      else {
//                 printf("10 less than 7");
            
//           }
//              return 0;

//  }



//  #include<stdio.h>
//  int main()
//  {
//      int x = 5;
//      int y = 2;
//         // nested if statement
        
//      if(x > 3){
//                     printf("x grethr than 3\n");
//               }
//               if(y < 5){
//                             printf("y less than 5\n");
//                        }
//                        return 0;

//                 }                       


//  #include<stdio.h>
//  #include<stdbool.h>
//  int main ()
//  {
//         // nested if else statement
//         int age = 2;
//         bool iscitizen = true;

//         if(age >= 18){
//                           printf("old you can vote\n");
                      
//        if(iscitizen){   
//                              printf("you citizen you vote\n");

                        
//                        }        
//                     else{
//                               printf("you can not citzen you cannot vote\n");
                             
//                          }

//                     }
//                              else{
//                                        printf("not old you cannot vote\n");
//                                  }
//                                  return 0;
//  }




// if -else if

// #include<stdio.h>
// int main()
// {
//         int marks = 85;
//         if(marks >= 90){
//                             printf("a\n");
//                        }
//                        else if(marks >= 80){
//                                                printf("b\n");                      
//                                            }
//                            else if(marks >= 70){
//                                                     printf("c\n");
//                                                }
//                        return 0;
// }


// #include<stdio.h>
// int main()
// {
//         int day = 5;
//         switch (day){
//                 case 1:
//                 printf("sunday\n");
//                 break;

//                 case 2:
//                 printf(" monday\n");
//                 break;

//                 case 3:
//                 printf("thusday\n");
//                 break;

//                 case 4:
//                 printf("wensday\n");
//                 break;

//                 case 5:
//                 printf("thursday\n");
//                 break;

//                 case 6:
//                 printf("friday\n");
//                 break;

//                 case 7:
//                 printf("saturday\n");
//                 break;
//                 return 0;
//         }
// }     






// #include<stdio.h>
// int main()
// {
//  int  balenc = 5000;
//   int   withdraw  = 2000;
//   if(withdraw>=balenc){
//                            printf("transactin successdul\n");
//                          }
//                          else{
//                                printf(" balence nhi hai \n");
//                              }
//                        return 0;      
// }



#include<stdio.h>
int main ()
{
     int marks ;
     printf("marks\n");
     scanf("%d",&marks);
     if(marks >= 35){
                         printf("pass");
                    }
            else{
             printf("fail");
            }
            return 0;
}

