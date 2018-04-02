#include "allheaders.h"
int main(int argc, char **argv) {
    PIX *pixs, *pixd;
    pixs = pixRead("lena.jpg");
    pixd = pixScale(pixs, 0.35, 0.35);  /* downscale by 0.35 */
    pixWrite("downscaled-example.png", pixd, IFF_PNG);
    pixDestroy(&pixs);
    pixDestroy(&pixd);
    return 0;
}

