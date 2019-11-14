#ifndef SWITCHES_H
#define SWITCHES_H

#include "std_types.h"
#include "std_macros.h"
#include "std_micro_comp_conf.h"


extern volatile uint8 memory_pass[5];
extern unsigned char input_pass[5];
extern volatile uint8 switch1_press, switch2_press;

void switch_init();

void callBackint ();


#endif
