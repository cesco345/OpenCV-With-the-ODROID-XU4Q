
#include <stdio.h>
#include <stdlib.h>
#include "allheaders.h"


main(int    argc, char **argv)
{
    PIX         *pixs;
    char        *filein;
    static char  mainName[] = "grayscale";

    if (argc != 2)
        exit(ERROR_INT(" Syntax:  grayscale filein", mainName, 1));

    filein = argv[1];
    if ((pixs = pixRead(filein)) == NULL)
        exit(ERROR_INT("pixs not made", mainName, 1));

    PIX *img = pixRead(filein);
    PIX *gray = pixConvertRGBToGrayMinMax(img, L_CHOOSE_MAX);
    pixWrite("leptonica_grayscale.jpg", gray, IFF_JFIF_JPEG);
    return 0;
}

