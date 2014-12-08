#include <stdio.h>
#include <iostream>

using namespace std;
int a,b,c;
int count=0;

int gcd(int p,int q){
	if(q==0)
		return p;
	else
		return gcd(q,p%q);
}

void combinationUtil(int arr[], int data[], int start, int end, int index, int r);
 
// The main function that prints all combinations of size r
// in arr[] of size n. This function mainly uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    int data[r];
 
    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 
/* arr[]  ---> Input Array
   data[] ---> Temporary array to store current combination
   start & end ---> Staring and Ending indexes in arr[]
   index  ---> Current index in data[]
   r ---> Size of a combination to be printed */
void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{
    // Current combination is ready to be printed, print it
    if (index == r)
    {
		a=data[0],b=data[1],c=data[2];
		if(gcd(gcd(a,b),c)==1)
			count++;

        for (int j=0; j<r; j++){
            //printf("%d ", data[j]);
			
	}
        return;
    }
 
    // replace index with all possible elements. The condition
    // "end-i+1 >= r-index" makes sure that including one element
    // at index will make a combination with remaining elements
    // at remaining positions
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

int main()
{
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    printCombination(arr, n, 3);
    cout<<count<<endl;
}
