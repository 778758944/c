#include <stdio.h>
/*定义透明可见*/
#define YES 1
#define NO 0
/*定义边框线样式*/
#define SOLID 0
#define DOTTED 1
#define DASHED 2
/*三原色*/
#define BLUE 4
#define GREEN 2
#define RED 1
/*混合颜色*/
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)
const char *color[8] = {
	"black",
	"red",
	"green",
	"yellow",
	"blue",
	"magenta",
	"cyan",
	"white"
};

struct box_props {
	unsigned int opaque        :1;
	unsigned int fill_color    :3;
	unsigned int               :4;
	unsigned int show_border   :1;
	unsigned int border_color  :3;
	unsigned int border_style  :2;
	unsigned int               :2;
};

void show_setting(const struct box_props * pb);

int main(void){
	struct box_props box = {
		YES,
		YELLOW,
		YES,
		GREEN,
		DASHED
	};

	printf("box size is %ld and int size is %ld\n", sizeof(struct box_props), sizeof(unsigned int));

	show_setting(&box);
}


void show_setting(const struct box_props * pb){
	printf("Box is %s.\n", pb->opaque == YES ? "opaque" : "transparent");
	printf("the fill color is %s\n", color[pb->fill_color]);
	printf("Border is %s\n", pb->show_border == YES ? "show" : "not shown");
	printf("The border color is %s \n", color[pb->border_color]);
	printf("the border style is");
	switch(pb->border_style){
		case SOLID: printf("Solid \n"); break;
		case DOTTED: printf("DOTTED \n"); break;
		case DASHED: printf("Dashed \n"); break;
		default: printf("unknow type \n"); break;
	}
}




































