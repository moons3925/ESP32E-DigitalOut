#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "DigitalOut.h"

#include "esp_log.h"

extern "C" void app_main(void);

// GPIO_NUM 4 と 18　のみＬチカの動作確認をした。。

void app_main()
{

    esp_log_level_set("*", ESP_LOG_ERROR);

    DigitalOut led(GPIO_NUM_18);

    led = 1;
    led = 0;

    while (true)
    {
        led = !led;
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}