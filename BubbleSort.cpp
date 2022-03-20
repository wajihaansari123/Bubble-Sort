#include<iostream>
using namespace std;

void printArray(int *A,int n)
 {
     for(int i = 0; i < n; i++)
     {
         cout<<A[i]<<" ";
     }
 }
//Bubble Sort
void BubbleSort(int *A,int n)
{
    int temp;
    for(int i = 0 ; i < n-1; i++)   //number of pass
    {
        for(int j = 0; j < n-1-i ; j++) //number of comparisons 
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
//Insertion Sort
void InsertionSort(int *A,int n)
{
    int key;    //key is the elemnet which is going to be shifted on sorted side 
    int j;      //where j is the value of its indecies
    for(int i = 1; i <= n-1 ; i++)    //loop for passes
    {
        key = A[i];
        j = i-1;
        while(A[j]>key) //loop fo each pass
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = key;
    }
}
////Selection Sort 
void Selectionort(int *A,int n)
{
    int temp;
    int least;
    for(int i = 0 ; i < n-1 ; i++)
    {
        least = i;
        for(int j = i+1 ; j < n-1 ;j++)
        {
            if(A[j] < A[least])
            {
                least = j;
            }
        }
        temp = A[i];
        A[i] = A[least];
        A[least] = temp;
    }
}
int main()
{
  int A[]={7,11,9,2,17,4};
  //  int A[]={1,2,3,4,5,6};
    int n = 6;
    cout<<"-----MY SORTION-----"<<endl;
    printArray(A,n);    //printng unsorted array
    BubbleSort(A,n);
    cout<<"\nBubbly Sorted!"<<endl;
    printArray(A,n);    //printing a sorted array
     cout<<"\nInsertion Sorted!"<<endl;
    InsertionSort(A,n);
     printArray(A,n);    //printing a sorted array
    Selectionort(A,n);
    cout<<"\nSelection Sorted!"<<endl;
     printArray(A,n);    //printing a sorted array
}
// cout<<"-----MY SORTION-----";
// cout<<"press B to Bubble Sort";
// cout<<"press I to Insertion Sort";
// cout<<"Press S to Selection Sort";