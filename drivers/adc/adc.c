#include "adc.h"
#include "driver/adc.h"
#include "../../boards/logger/logger.h"

void initADC(int channel) {
    if (channel == PRESSURE) {
        adc1_config_width(ADC_WIDTH_BIT_12);
        adc1_config_channel_atten(channel, ADC_ATTEN_11db);
    } else if (channel == ADC0 || channel == ADC1 || channel == ADC2 || channel == ADC3) {
        adc2_config_channel_atten(channel, ADC_ATTEN_11db);
    }
}

int readAnalog(int channel) {
    if (channel == PRESSURE) {
        return adc1_get_raw(channel);
    } else if (channel == ADC0 || channel == ADC1 || channel == ADC2 || channel == ADC3) {
        int read_raw;
        esp_err_t r = adc2_get_raw(channel, ADC_WIDTH_12Bit, &read_raw);
        return read_raw;
    } else {
        return -10; // Error
    }
}