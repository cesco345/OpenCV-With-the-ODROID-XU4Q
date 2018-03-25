#include <stdio.h>
#include <stdlib.h>
#include "allheaders.h"


main(int    argc, char **argv)
{
    PIX         *pixs;
    char        *filein;
    static char  mainName[] = "display_image";

    if (argc != 2)
        exit(ERROR_INT(" Syntax:  display_image filein", mainName, 1));

    filein = argv[1];
    if ((pixs = pixRead(filein)) == NULL)
        exit(ERROR_INT("pixs not made", mainName, 1));

     pixDisplay(pixs, 20, 20);
     pixDestroy(&pixs);

     return 0;
}
