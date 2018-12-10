#include <iostream>
#include <ctime>
#include <cassert>
#include <string>
#include <algorithm>
#define DEBUG 
using namespace std;

namespace SortTestHelper {
 // 生成有n个元素的随机数组,每个元素的随机范围为[rangeL, rangeR]
    int *generateRandomArray(int n, int rangeL, int rangeR) {

        assert(rangeL <= rangeR);

        int *arr = new int[n];

        srand(time(NULL));
        for (int i = 0; i < n; i++)
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        return arr;
    }
    
    void printArray(int arr[], int n) {

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        return;
    }

     bool isSorted(int arr[], int n) {

        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;

        return true;
    }
    
    void testSort(const string &sortName, void (*sort)(int[], int), int arr[], int n) {

        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();

        assert(isSorted(arr, n));
        cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;

        return;
    }
}


void BubbleSort(int a[],int n)
{
	int a,b;
	
}

void SelectionSort(int a[],int n)
{
	
	
}
void InsetionSort(int a[],int n)
{
	
	
}

void ShellSort(int a[],int n)
{
	
	
}

void MergeSort(int a[],int n)
{
	
	
}

void QuickSort(int a[],int n)
{
	
	
}

void StlSort(int a[],int n)
{
	
	sort(a,a+n);
}

main()
{
	#ifdef DEBUG
	int a[10]={3,4,1,8,6,9,7,5,10,2};
	int n=10;
	#else
	int n=100000;
	int *a;
	a=SortTestHelper::generateRandomArray(n,1,1000);
	#endif
	//SortTestHelper::printArray(a,n);
	
	SortTestHelper::testSort("stl sort",StlSort,a,n);
	
	//SortTestHelper::printArray(a,n);
	#if !defined(DEBUG)
	delete  []a;
	#endif
	return 0;
}

