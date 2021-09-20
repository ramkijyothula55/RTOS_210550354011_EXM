#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/timers.h"

static const TickType_t delay = 10000 / portTICK_PERIOD_MS; // delay to the function
static const int func = 10000; // initilization of value
static TimerHandle_t one_shot_timer = NULL; // global declaration

void temperature_task(void *data)
{
    while(1)
    {
        printf(" temperature measurement started \n");
        
        printf(" temperature measurement ended \n");
        vTaskDelay(1000/ portTICK_PERIOD_MS);

    }
}



   




void pressure_task(void *data)
{
    
    while(1)
    {
        long start = xTaskGetTickCount();
        printf(" pressure measurement started \n");
    
        printf(" pressure measurement ended \n");
        vTaskDelay(2000/ portTICK_PERIOD_MS);
        long end = xTaskGetTickCount()-start; 
        printf("timestampfor pressure task = %lu \n", end);
      
    }
   
}



void three_task(void *data)
{
    void trigger function callback(TimerHandle_t xTimer)

    
    while(1)
    {
        long start = xTaskGetTickCount();
        printf(" three started \n");
        printf("oneshot software timer triggered \n");
        printf(" three ended \n");
        vTaskDelay(5000/ portTICK_PERIOD_MS);
        long end = xTaskGetTickCount()-start; 
        printf("timestampfor three task = %lu \n", end);
      
    }
   
}
