#include <stdio.h>
int main(void){
	char * mesg = "Do not be a fool";
	char * copy;

	copy = mesg;
	printf("%s\n",copy);
	printf("mesg = %s;&mesg = %p; value = %p\n",mesg,&mesg,mesg);
	printf("copy = %s; &copy = %p; value = %p\n",copy,&copy,copy);
	return 0;
}