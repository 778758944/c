#include <stdio.h>
int main(void){
	int urn[5] = {100, 200, 300, 400, 500};
	int * ptr1, * ptr2, *ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];//取得指针

	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);

	//指针加法
	ptr3 = ptr1 + 4;
	printf("adding an int to pointer:\n");
	printf("ptr1+4 = %p, *(ptr1+4) = %d\n",ptr1+4,*(ptr1+4));
	ptr1++;
	printf("values after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);

	ptr2--;
	printf("values after ptr2--:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",ptr2,*ptr2,&ptr2);

	--ptr1;
	++ptr2;

	printf("Pointer reset to original values:\n");
	printf("ptr1 = %p,ptr2 = %p\n",ptr1,ptr2);
	//指针相减法
	printf("substrcing one pointer from another:\n");
	printf("ptr2 - ptr1 = %ld\n",ptr2-ptr1);

	printf("substrcing an int from a pointer:\n");
	printf("ptr3 = %p,ptr3 - 2 = %p\n",ptr3,ptr3-2);

	return 0;
}







































