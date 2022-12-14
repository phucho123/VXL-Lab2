/*
 * software_timer.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Admin
 */

#include "software_timer.h"

int timer_counter[1] = {0};
int timer_flag[1] = {0};

void setTimer(int index,int duration){
	timer_counter[index] = duration;
	timer_flag[index] = 0;
}

void timerRun(){
	for(int i = 0;i<1;i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
				timer_flag[i] = 1;
			}
		}
	}
}
