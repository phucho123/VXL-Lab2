/*
 * software_timer.h
 *
 *  Created on: Sep 29, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[2];
void setTimer(int index,int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
