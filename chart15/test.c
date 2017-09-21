#include <stdio.h>

struct box_props {
	unsigned int color: 30;
	unsigned int width: 10;
};


int main(void){
	struct box_props box = {12,1};
	printf("box size is %ld\n", sizeof(box));
	printf("color is %d\n", box.color);
	printf("name is %d\n", box.width);
	return 0;
}