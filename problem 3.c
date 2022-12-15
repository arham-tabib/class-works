#include<stdio.h>
int main(){
   int N, x, y, z;

   scanf("%d", &N);

  {

    if (N % 3 == 0)
    {
         x = 1;
         y = 1;
         z = N - 2;
    }

    else {
        x = 1;
        y = 2;
        z = N - 3;
    }
}

   if(x == y && y == z)
      printf("Equilateral\n");
   else if(x == y || y == z || z == x)
      printf("Isosceles\n");
   else
      printf("Invalid\n");
   return 0;
}
