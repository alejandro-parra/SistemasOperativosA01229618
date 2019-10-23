#include "types.h"
#include "stat.h"
#include "user.h"
int
main(int argc, char **argv)
{
    int x;
    if(argc>=2){
        printf(1,"sleep iniciará \n");
        x = atoi(argv[1])*100;
        sleep(x);
    }


    printf(1,"el sleep acabo \n");



;
  exit();
}