// Interface
#include "logger.h"

// Standard C
#include <stdio.h>
#include <unistd.h>

// ESP-IDF
#include "esp_system.h"
#include "esp_sleep.h"
#include "esp_timer.h"

// DIS ESP Drivers
#include "../../drivers/adc/adc.h"

void initLoggerBoard() {
    printf("This board is: Logger Board\n");
    initADC(PRESSURE);
}

void mainLogger() {
    initLoggerBoard();
    
    while (1) {
        int analog = readAnalog(PRESSURE);
        printf("Analog read: %d\n", analog);
        usleep(500000);
    }
}