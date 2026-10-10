// #include<stdio.h>
// int add(int a,int b);
// int main()
// {
//     int result;
//     result = add(5,3);
//     printf("sum = %d",result);
//     return 0;
// }

// int add(int a,int b)
// {
//     return a + b;
// }




// #include<stdio.h>
// int squre(int a);
// int main()
// {
//     int num ,result;
//     printf("num\n");
//     scanf("%d\n",&num);
//     result = squre(num);
//     printf("squre of %d or %d\n",num,result);
//     return 0;

// }

// int squre(int a)
// {
//     return a * a;
// }





// #include<stdio.h>
// int add(int a,int b);

// int main()
// {
//   int result;
//   result = add(5,6);
//   printf("sum = %d \n",result);
//  return 0;
// }
// int add(int a,int b)
// {
//     return a*b;
// }





// #include<stdio.h>
// int squre(int a);
// int main()
// {
//     int result,num;
//     printf("num");
//     scanf("%d",&num);
//     result = squre(num);
//     printf("squre of %d \n",num,result);
//     return 0;
// }


//  int squre(int a)
//  {
//     return a * a;
//  }





// #include<stdio.h>
// int gret(int a,int b);
// int main()
// {
//     int a = 5;
//     int b = 10;
//     if(a > b){
//         printf("a grether than b");
//     }
//     else{
//         printf("b grether than a");
//     }
//     return 0;
// }

// int gret(int a, int b)
// {
//     return a,b;
// }





// #include<stdio.h>
// int add(int i);
// int main ()
// {
//     int i;
//     for(int i = 0;i < 10;i++)
//     {
//         if(i % 2 != 0)
//         {
//             continue;
//         }
//         if(i % 2 == 0)
//         {
//             continue;
//         }
//     }
//     return 0;
// }

// int add(int i)
// {
//     return i;
// }






// #include<stdio.h>
// int add(int a,int b);
// int main()
// {
//     int result;
//     result = add(5,6);
//     printf("sum = %d\n",result);
//     return 0;
// }

//  int add(int a,int b)
//  {
//     return a + b;
//  }





// #include<stdio.h>
// int squre(int a);
// int main()
// {
//     int result,num;
//     printf("num");
//     scanf("%d",&num);
//     result = squre(num);
//     printf("squre of %d = %d",num, result);
//     return 0;
// }



//  int squre(int a){
//      return a * a;
//  }





// #include<stdio.h>
// int squre (int a);
// int main()
// {
//     int result;
//     result = squre(6);
//     printf("squre of = %d\n",result);
//     return 0;
// }
//  int squre(int a){
//     return a * a;
//  }




// #include<stdio.h>
// int cube(int a);
// int main()
// {
//     int result;
//     result = cube(2);
//     printf("cube of %d ",result);
//     return 0;
// }

//  int cube(int a)
//  {
//     return a * a * a;
//  }






// #include<stdio.h>
// int a(int a,int b)
// {
// if(a > b){
//     return a;
// }
// else{
//     return b;
// }
// }

// int main ()
// {
// int big;
// big = a(20,50);
// printf("bda no%d\n",big);
// return 0;
// }




#include<stdio.h>
float a(float a,float b)
{

    return a + b;
}
int main()
{
    float ora;

  ora = a(5.32,6.76);
  printf("sum = %f\n",ora);
  return 0;
}