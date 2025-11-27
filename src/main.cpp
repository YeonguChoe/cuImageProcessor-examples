#include "cuImageProcessor/bitmap.cuh"
#include "cuImageProcessor/resize.cuh"
#include "cuImageProcessor/crop.cuh"
#include "cuImageProcessor/grayscale.cuh"
#include "cuImageProcessor/rotate.cuh"
#include "cuImageProcessor/flip.cuh"

int main()
{
    resize("input.bmp", 500, 500);
    crop("input.bmp", 100, 100, 200, 200);
    grayscale("input.bmp");
    rotate("input.bmp");
    flip_horizontal("input.bmp");
    flip_vertical("input.bmp");
    return 0;
}
