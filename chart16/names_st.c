#include <stdio.h>
#include "names_st.h"

void get_names(names * pn){
	int i;

	printf("Please enter first name:");
	fgets(pn->first, SLEN, stdin);
	i = 0;
	while(pn->first[i] != '\n' && pn->first[i] != '\0'){
		i++;
	}

	if(pn->first[i] == '\n')
		pn->first[i] = '\0';
	else
		while(getchar() != '\n'){
			continue;
		}

	printf("please enter your last name:");

	fgets(pn->last, SLEN, stdin);
	i = 0;

	while(pn->last[i] != '\n' && pn->last[i] != '\0')
		i++;

	if(pn->last[i] == '\n')
		pn->last[i] = '\0';
	else
		while(getchar() != '\n')
			continue;

}

void show_names(const names * pn){
	printf("name is %s %s", pn->first, pn->last);
}

































