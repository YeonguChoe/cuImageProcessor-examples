#include "cuImageProcessor/bitmap.cuh"
#include "cuImageProcessor/resize.cuh"
#include "cuImageProcessor/crop.cuh"
#include "cuImageProcessor/rotate.cuh"
#include "cuImageProcessor/grayscale.cuh"
#include "cuImageProcessor/flip.cuh"

#include <iostream>

int main()
{
    flip_horizontal("input.bmp");
    return 0;
}