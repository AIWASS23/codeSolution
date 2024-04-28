#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int array1 = m - 1;
    int array2 = n - 1;
    int indiceAtual = m + n - 1;

    while (array1 >= 0 && array2 >= 0) {
        if (nums1[array1] >= nums2[array2]) {
            nums1[indiceAtual] = nums1[array1];
            indiceAtual--;
            array1--;
        } else {
            nums1[indiceAtual] = nums2[array2];
            indiceAtual--;
            array2--;
        }
    }

    while (array2 >= 0) {
        nums1[indiceAtual] = nums2[array2];
        indiceAtual--;
        array2--;
    }
}
