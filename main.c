// ADT Stack
#include <stdio.h>
#include "ADT_stack.h"
#include "chart.h"

#define REVERSE 1 // reverse

int main() {

	// new type definition
	typedef struct {
		char name[20];
		int score;
	} STD;

	// prepare 5 data
	STD student[5] = {
		{"James", 95},
		{"Yoosoo", 87},
		{"Paul", 93},
		{"Peter", 76},
		{"Park", 100}
	};

#ifndef REVERSE
	generate_chart_header();
	//                    me                my boss            my score
	generate_chart_node(student[0].name, student[0].name, student[0].score); 
	generate_chart_node(student[1].name, student[0].name, student[1].score); 
	generate_chart_node(student[2].name, student[1].name, student[2].score); 
	generate_chart_node(student[3].name, student[2].name, student[3].score); 
	generate_chart_node(student[4].name, student[3].name, student[4].score); 
	generate_chart_footer();
#else
	STACK* stack = create_stack();

	//push them
	int i;
	for(i = 0; i<5; i++)
	{
		push(stack, &student[i]);
	}

	//pop them;
	STD* boss = NULL; //backup previous boss
	STD* std;
	
	generate_chart_header();
	
	while(stack->count != 0)
	{
		boss = (STD*)pop(stack);
		generate_chart_node(boss->name, (boss+1)->name, boss->score);
	}
	generate_chart_footer();


    // your code here.
    // partial codes are listed in homework introduction file (ppt file)
    // please refer to it.


#endif

    return 0;
}

