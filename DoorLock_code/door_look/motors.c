#include "motors.h"

unsigned char motor_full_steps [FULL_WAVE_STEPS] = {12,6,3,9};
unsigned char motor_half_steps [HALF_WAVE_STEPS] = {8,12,4,6,2,3,1,9};

void stepper_motor_init(void)
{
 data_port_dir = 0x0F;
 data_port     &= 0xF0;
}

void servo_init(uint16 duty_cycle)
{
/////
	TIMER_ConfigType TIMER1_pwm ={TIMER1_Fast_PWM, F_CPU_64,duty_cycle };
	TIMER1_init(&TIMER1_pwm);

}

void servo_move(uint16 duty_cycle)
{
	 Timer1_Fast_PWM_n_invert_speed(duty_cycle);
}
