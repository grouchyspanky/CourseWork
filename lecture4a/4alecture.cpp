#include <iostream>

template<typename T>
void swap(T& a, T& b) {

int temp = a;

a = b;

b = temp;

}

template<typename T, int size>
void printArray(T array[]){


for (size_t i = 0; i < size; i++)
{
    std::cout<< array[i]<<std::endl;
}

}

int main(){

    const size_t SIZE{5};
int a = 1;
int b = 2;

const size_t SIZE{5};
 
int values[SIZE];


for (size_t i = 0; i < SIZE; i++)
{
    values[i] = i*i;

printArray<int,SIZE>(values);

}







swap(a,b);
double values[]{1.0, 2.5, 4.0, 5.5, 6.7};











}