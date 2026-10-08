// #include<stdio.h>
// int main()
// {
//    char name[] = "omkar";
   
//    //printing the name

//    printf("you%s",name);
//    return 0;


// }


// #include<stdio.h>
// int main()
// {
//   char name[] = "omkar";
//   //select one letter
  
//    printf("%c",name[3]);
//    return 0;


// }


// #include<stdio.h>
// int main()
// {
//     char name[] = "dora";

//    //update the first char of str
//    name[0] = 'b';
//    printf("%c",name[0]);
//    return 0;

// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//   char name[]= "omkar";
//   // words length

//   printf("%d",strlen(name));
//   return 0;
// }


// #include<stdio.h>
// int main()
// {
//      char name[6];
//     //readthe string output form user
//      scanf("%s",name);
//      printf("%s",name);
//      return 0;
//}


// #include<stdio.h>
// int main()
// {
//   const char *str = "hello world ";

//   printf("%s",str);
//   return 0;

// }





// #include<stdio.h>
// int main()
// {
//     char name[4][20] = {"amit","rahul","puja","vikas"};
     
//     printf("friend 1 :%s\n",name[0]);
//     printf("friend 2 :%s\n",name[1]);
//     printf("friend 3 :%s\n",name[2]);
//     printf("firend 4 :%s\n",name[3]);
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[] = "ARO";
//     int len = strlen(name);
//     printf("ulta word\n");
//     for(int i = len - 1;i >= 0;i--)
//     {
//         printf("%c", name[i]);
//     }
//     return 0;
// }







#include<stdio.h>
#include<string.h>
int main ()
{
    char a[] = "education";
    int len = strlen(a);
    int count = 0;
    for(int i = 0;i < len;i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count ++;
        }
    }
    printf("totals vovles%d\n",count);
    return 0;
}
