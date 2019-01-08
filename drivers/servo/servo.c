#include "servo.h"
#include "esp_err.h"

void initServoTimer() {
    ledc_timer_config_t ledc_timer = {
        .duty_resolution = SERVO_RESOLUTION, // resolution of PWM duty
        .freq_hz = SERVO_FREQUENCY,          // frequency of PWM signal
        .speed_mode = LEDC_HS_MODE,          // timer mode
        .timer_num = LEDC_HS_TIMER           // timer index
    };
    // Set configuration of timer0 for high speed channel
    ledc_timer_config(&ledc_timer);
}

void initServo(int channel, int ctrl_pin) {
    ledc_channel_config_t config = {
        .channel    = channel,
        .duty       = 0,
        .gpio_num   = ctrl_pin,
        .speed_mode = LEDC_HS_MODE,
        .hpoint     = 0,
        .timer_sel  = LEDC_HS_TIMER
    };
    ledc_channel_config(&config);
}

void setServo(int channel, int percentage) {

    int duty = (int)((percentage/100.0) * (435-100) + 100);
    printf("Setting duty to %d\n", duty);
    esp_err_t res = ledc_set_duty(LEDC_HIGH_SPEED_MODE, channel, duty);
    if(res == ESP_ERR_INVALID_ARG) {
        printf("Invalid argument\n");
    }
    res = ledc_update_duty(LEDC_HIGH_SPEED_MODE, channel);
    if(res == ESP_ERR_INVALID_ARG) {
        printf("Invalid argument\n");
    }
}

void getServo(int fb_pin) {
    printf("getServo not implemented yet.\n");
}