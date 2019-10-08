#include <stdio.h>

int update(int n)
{
   static int x = 100;
   printf("%d\n", x+n);

   return x+=n;
}


int main()
{
   unsigned int opt, n;
   while(1)
   {
      printf("update: 1, end: 4 \n");
        scanf("%d", &opt);

        if (opt<3 && opt>0){
           printf("input quantity : ");
           scanf("%d", &n);
    }
      switch (opt){
        case 1:
           update(n);
           break;
        case 4:
           goto Out;
        default:
           printf("error\n");
      }
   }
   Out:
   return 0;
}
