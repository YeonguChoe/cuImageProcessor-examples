#include "cuImageProcessor/bitmap.cuh"
#include "cuImageProcessor/resize.cuh"
#include "cuImageProcessor/grayscale.cuh"

#include <iostream>

int main()
{
    grayscale("input.bmp");
    return 0;
}