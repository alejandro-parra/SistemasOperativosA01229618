#include <stdio.h>
 #include <stdlib.h>

  int main(int argc, char* argv[])
 {
     int neighbor;
     int neighbor2;

      scanf("%d", &neighbor);
     fprintf(stderr, "%d\n", neighbor);
     scanf("%d", &neighbor2);
     while(neighbor2 != -1){
         if(neighbor2%neighbor != 0){
             printf("%d\n", neighbor2);
         }
         scanf("%d", &neighbor2);
     }
     printf("%d\n", -1);
 }
