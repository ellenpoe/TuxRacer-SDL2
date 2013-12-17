#ifndef PLATFORM_H
#define PLATFORM_H

int get_overscan_percent();

int get_course_index(char* course_name);
int get_num_courses();

void submit_score(char* course_name, int score);

char* get_race_text();
char* get_back_text();

#endif