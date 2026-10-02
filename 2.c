// opretor

// #include<stdio.h>
// int main ()
// {
//     int a = 10, b = 6,c;
//     printf("1=arthmatic opreter\n");
//     printf("a / b = %d\n,",a / b);
//     printf("a * b = %d\n",a * b);
//     printf("a - b = %d\n",a - b);
//     printf("a + b = %d\n",a + b);
//     return 0;
// }


//  #include<stdio.h>
//  int main()
//  {
//      int a = 10, b = 8,c;
//      printf("2=relational opretor\n");
//      printf("a == b %d\n",a == b);
//      printf("a != b %d\n",a != b);
//      printf("a < b %d\n",a < b);
//      printf("a > b %d\n",a > b);
//      return 0;
//  }

// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 3, c;
//     printf("3=logical opretor");
//     printf("(a < b) && (b < 0)%d\n",(a < b) && (b < 0));
//     printf("(a > b) || (b > 0)%d\n",(a > b) || (b > 0));
//     printf("!(a == b)%d\n",!(a == b));
//     return 0;
// }

//  #include<stdio.h>
//   int main()
//   {
//      int a = 2, b = 3,c;
//      printf("4=assinment oprear\n");
//      c = a;
//      printf("c = a%d\n",c);
//      c += b;
//      printf("c += b%d\n",c);
//      c -= b;
//      printf("c -= b%d\n",c);
//      c *= b;
//      printf("c *= b%d\n",c);
//      return 0;
//   }


//  #include<stdio.h>
//  int main()
//  {
//      int a = 10, b = 5,c;
//     printf("5=increament/decrement\n");
//     printf("++a = %d\n",++a);
//      printf("a++ = %d\n",a++);
//     printf("--b =%d\n",--b);
//      printf("b-- =%d\n",b--);
//      return 0;
//  }


//  #include<stdio.h>
//  int main()
//  {
//      int a = 10,b = 9,c;
//       printf("6=conditional opretor\n");
//       int max = (a = b) ? a : b;
//       printf("max of a & b%d\n",max);
//       return 0;
//  }


//  #include<stdio.h>
//  int main()
//  {
//      int a = 10, b = 5, c;
//      printf("7=bitwise opretor\n");
//      printf("a & b =%d\n",a & b);
//      printf("a | b =%d\n",a | b);
//      printf("a ^ b =%d\n",a ^ b);
//      printf("a << 1= %d\n",a << b);
//      return 0;
//  }


// #include<stdio.h>
// int main()
// {
//     int a = 5,b = 8,c;
//     printf("8=special opretor\n");
//     printf("sizeof(int) = %zu\n",sizeof(int));
//
//
 //      return 0;
//}




// user se input 

// #include<stdio.h>
// int main()
// {
//     int a , b ,c;
    
//     printf("first nomber :\n");
//     scanf("%d",&a);
//     printf("second no :\n");
//     scanf("%d",&b);
//     printf("a + b = %d",a + b);
//     return 0;
// }    


 


// area amd paramitrs

//   #include<stdio.h>
//  int main()
//   {
//      int length =7;
//      int wedth = 6;
//      int area,paramiters;

//      area = length*wedth;
//      paramiters = 2 *(length+wedth);
//      printf(" results  \n");
//      printf("area%d\n",area);
//      printf("paramiters%d\n",paramiters);
//      return 0;

//   }





//celsis to faranite

#include<stdio.h>
int main ()
{
    float celsius , faranite;
    printf("celsius\n");
    scanf("%f",&celsius);
    faranite = (celsius * 9.0 / 5.0) + 32.0;
    printf("faranite:%.2f\n",faranite);
    return 0;
}