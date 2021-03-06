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
/*定义位运算常量*/
#define OPAQUE 0x1
#define FILL_BLUE 0x8
#define FILL_GREEN 0x4
#define FILL_RED 0x2
#define FILL_MASK 0xE
#define BORDER 0X100
#define BORDER_BLUE 0x800
#define BORDER_GREEN 0x400
#define BORDER_RED 0x200
#define BORDER_MASK 0xE00
#define B_SOLID 0
#define B_DOTTED 0x1000
#define B_DASHED 0x2000
#define STYLE_MASK 0x3000

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

union Views {
	struct box_props st_view;
	unsigned int ui_view;
};

void show_setting(const struct box_props * pb);
void show_setting1(unsigned int);
char * itob(int, char *);

int main(void){
	union Views box = {{
		YES,
		YELLOW,
		YES,
		GREEN,
		DASHED
	}};
	char bin_str[8 * sizeof(unsigned int) + 1];
	printf("Original box is: \n");
	show_setting(&box.st_view);
	printf("Box setting use unsigned int view: \n");
	show_setting1(box.ui_view);
	printf("bits are %s\n", itob(box.ui_view, bin_str));

	box.ui_view &= (~FILL_MASK); //0
	box.ui_view |= (FILL_BLUE | FILL_GREEN); //1100
	box.ui_view ^= OPAQUE;
	box.ui_view |= BORDER_RED;
	box.ui_view &= ~STYLE_MASK;
	box.ui_view |= B_DOTTED;
	printf("modify box setting\n");
	show_setting(&box.st_view);
	printf("Box setting using unsigned int view");
	show_setting1(box.ui_view);
	printf("bit are %s\n", itob(box.ui_view, bin_str));
	return 0;


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

void show_setting1(unsigned int us){
	printf("box is %s.\n", (us & OPAQUE) == OPAQUE ? "opaque" : "transparent");
	printf("the fill_color is %s\n", color[(us >> 1) & 07]);
	printf("Border is %s.\n", (us & BORDER) == BORDER ? "shown" : "not shown");
	printf("the border style is ");
	switch(us & STYLE_MASK){
		case B_SOLID: printf("Solid \n"); break;
		case B_DOTTED: printf("Dotted \n"); break;
		case B_DASHED: printf("Dashed \n"); break;
		default: printf("unknow type \n"); break;
	}
	printf("the border_color is %s\n", color[(us >> 9) & 07]);
}

char * itob(int n, char *ps){
	int size = 8 * sizeof(int);
	int i;
	for(i = size-1; i >= 0; i--, n >>= 1){
		ps[i] = (01 & n) + '0';
	}
	ps[size] = '\0';
	return ps;
}




































