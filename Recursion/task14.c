#include <stdio.h>
int minmax(int *arr, const int size, int i, int oper, int val) {
        if (oper == 1) {
                if (arr[i] > val) {
                        val = arr[i];
                }
                if (i < size) {
                        return minmax(arr, size, i + 1, oper, val);
                }
                return val;
        }
        if (oper == 0) {
                 if (arr[i] < val) {
                        val = arr[i];
                 }
                 if (i < size) {
                        return minmax(arr, size, i + 1, oper, val);
                 }
                 return val;
        }
        return 0;
}
