#include <iostream>
#include<vector>
using namespace std;

void countsort(int a[], int size)
{
    int max = a[0];
    vector<int>count;                //array of not fixed sized; dynamic
    vector<int>output(size);
    for (int i = 1; i < size; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    count.resize(max+1,0);          //size of count=max+1, initialising each element as 0

    for (int i = 0; i <= max; i++){
        count[i] = 0;
    }
    for (int i = 0; i < size; i++){
        count[a[i]]++;
    }
    for (int i = 1; i <=max; i++){            // storing cumulative sum in count[]
        count[i] = count[i - 1] + count[i];
    }
    for (int i = size - 1; i >= 0; i--){      // counting sort always starts from end of array
        output[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    for(int i=0;i<size;i++){
        a[i]=output[i];
    }
}
int main()
{
    int a[] = {50, 32, 56, 12, 9};
    int n = sizeof(a) / sizeof(a[0]);
    countsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
