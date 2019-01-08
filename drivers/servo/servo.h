#include "driver/ledc.h"

// High speed PWM
#define LEDC_HS_TIMER          LEDC_TIMER_0
#define LEDC_HS_MODE           LEDC_HIGH_SPEED_MODE

#define SERVO_RESOLUTION 12
#define SERVO_FREQUENCY 50

void initServoTimer();

void initServo(int channel, int ctrl_pin);

void setServo(int channel, int percentage);

void getServo(int fb_pin);