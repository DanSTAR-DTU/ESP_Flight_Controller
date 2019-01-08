// Interface
#include "controller.h"

// Standard C
#include <stdio.h>
#include <unistd.h>

// ESP-IDF
#include "esp_system.h"
#include "esp_sleep.h"
#include "esp_timer.h"

// DIS ESP Drivers
#include "../../drivers/servo/servo.h"


void initControllerBoard() {
    printf("This board is: Controller Board\n");
    initServoTimer();
    initServo(SERVO1_CHANNEL, SERVO1_CTRL);
    initServo(SERVO2_CHANNEL, SERVO2_CTRL);
    initServo(SERVO3_CHANNEL, SERVO3_CTRL);
    initServo(SERVO4_CHANNEL, SERVO4_CTRL);
    initServo(SERVO5_CHANNEL, SERVO5_CTRL);
    initServo(SERVO6_CHANNEL, SERVO6_CTRL);
    initServo(SERVO7_CHANNEL, SERVO7_CTRL);
    initServo(SERVO8_CHANNEL, SERVO8_CTRL);
}

void mainController() {
    initControllerBoard();
    
    int perc = 0;
    int step = 1;
    while(1) {
        setServo(SERVO1_CHANNEL, perc);

        perc += step;
        if (perc == 100 || perc == 0) {
            step *= -1;
        }
        usleep(250000);
    }
}