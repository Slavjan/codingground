#include <iostream>
#include <cmath>

using namespace std;

int foo(int *A, const int size, int i = 0,int summ = 0)
{
    if(size == i)
        return summ;
    if(A[i] < 0){
        summ += A[i];
    }
    return summ = foo(A, size, i+1, summ);
}

int main()
{
   int A[] = {-15, 1,-1,2,9,-3, 9, -7};
   int i = 0;
   int size = sizeof(A)/sizeof(int);

   i = foo(A, size);

   cout << "summ: "<< i << endl;

   return 0;
}
