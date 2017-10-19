#include <stdio.h>
#include "names_st.h"

int main(void){
	names candidate;
	get_names(&candidate);
	show_names(&candidate);
	return 0;
}

