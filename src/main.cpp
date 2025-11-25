#include "cuImageProcessor/bitmap.cuh"
#include "cuImageProcessor/resize.cuh"
#include "cuImageProcessor/grayscale.cuh"
#include "cuImageProcessor/crop.cuh"

#include <iostream>

int main()
{
    crop("input.bmp", 200, 200, 500, 500);
    return 0;
}