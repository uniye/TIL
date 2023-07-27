#include<iostream>

using namespace std;

int main()
{
    //이중포인트 사용해보자구욧 되나...?
    int Arr1[] = { 1,2,3,4,5,6 };
    int Arr2[] = { 7,8,9,10,11,12 };
    int Arr3[] = { 13,14,15,16,17 };
    
    int* p1 = Arr1;
    int* p2 = Arr2;
    int* p3 = Arr3;

    int* p[] = { p1,p2,p3 };

    int** pp = p;

    //이게 무슨...
    cout << (*(pp+1)+1) << endl;
    cout << *(*(pp + 1) + 1) << endl;


    return 0;
}