// Standard C
#include <stdio.h>

// ESP-IDF
#include "esp_system.h"
#include "esp_sleep.h"
#include "esp_timer.h"

// DIS Flight Controller Boards
#include "../boards/controller/controller.h"
#include "../boards/logger/logger.h"

int isController = 0;

void app_main()
{

    printf("Started\n");
    if (isController) {
        mainController();
    } else {
        mainLogger();
    }
    
}
