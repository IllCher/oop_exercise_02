#include <iostream>
#include <fstream>
//#include "vector.hpp"
//#include <limits.h>
//#include <vector> //использовать нельзя
typedef struct {
    char value[65];
    char key[33] = {0};
} kv;

/*int getMax(kv arr[], int n)
{
    int max = char_to_int(arr[0].key[3];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i].key;
    return mx;
}*/
int char_to_integer(char a) {
    switch(a) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'a': return 10;
        case 'b': return 11;
        case 'c': return 12;
        case 'd': return 13;
        case 'e': return 14;
        case 'f': return 15;
        default: return -1;
    }
}

void countSort(kv arr[], int n, int k) {
    kv output[n];
    int c[16] = {0};
    for (int i = 0; i < n; i++) {
        c[char_to_integer(arr[i].key[k])]++;
    }
    for (int i = 1; i < 16; i++) {
        c[i] += c[i - 1];
    }
    for (int i = n-1; i >= 0; i--) {
        output[c[char_to_integer(arr[i].key[k])]-1] = arr[i];
        c[char_to_integer(arr[i].key[k])]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void Radixsort(kv arr[], int n, int k) {
    for (int i = k; i >= 0; i--) {
        countSort(arr, n, i);
    }
}


int main() {
    kv arr[10];
    std::ifstream fin("tests.txt");
    for (int i = 0; i < 10; i++) {
        kv elem;
        fin >> elem.key >> elem.value;
        arr[i] = elem;
    }
    Radixsort(arr, 10, 31);
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i].key << " " << arr[i].value << std::endl;
    }
    fin.close();
    return 0;
}