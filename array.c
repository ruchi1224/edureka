#include <stdio.h>
#include <string.h>



int main()
{
	int arr[] = {1,2,3,6,4,5};
	int *ptr = arr;


	for(int i = 0; i < 6; i++)
	{
		printf("arr[i] :%p\t",&arr[i]);
		printf("arr[i] :%d\t",arr[i]);
		printf("*(ptr + i) :%d\t",*(ptr+i));
		printf("(ptr + i) :%p\n",(ptr + i));
        }

	return 0;
}
