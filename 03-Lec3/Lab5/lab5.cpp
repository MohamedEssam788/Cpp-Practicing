#include <iostream>

void BubbleSort(int *arr , int size);
void swap(int *x ,int *y);
int main(void)
{
    int elements ;
    
    std::cout <<"Enter the number of elements: ";
    std::cin>>elements;

    int *ptr = new int[elements];

    for (int i = 0; i < elements; i++)
    {
        std::cout<<"Enter element "<<i+1<<" : ";
        std::cin>>ptr[i];
    }

    std::cout<<"The unsorted array  : ";
    for (int i = 0; i < elements; i++)
    {
        std::cout<< ptr[i]<<" " ;
    }

    BubbleSort(ptr,elements);


    std::cout<<"\nThe sorted array  : ";
      for (int i = 0; i < elements; i++)
    {
       std::cout<< ptr[i]<<" " ;
    }

    delete[] ptr;

    return 0;

}



void BubbleSort(int *arr , int size)
{
	int steps = size-1;
	int iterations = size -1;
	int i,j;
	for(i=0 ; i< steps ; i++)
	{
		for(j=0 ; j< iterations-i ; j++)
		{
			if(arr[j]> arr[j+1])//Check if the previous element is larger then swap
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}





void swap(int *a ,int *b)
{
    *a ^= *b;
	*b ^= *a;
	*a ^= *b;

}