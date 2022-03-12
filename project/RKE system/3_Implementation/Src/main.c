/**
 * @file main.c
 * @author Sainimitha Mullapudi
 * @brief 
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include<stdbool.h>
#include "MyStm32f407xx.h"
/**
 * @brief PREPROCESSORS
 * @author Sainimitha MUllapudi
 */
#define BUTTON_PRESS ENABLE
#define LED_On ENABLE
#define LED_Off DISABLE


int ENCRYPTION()

{ 
   bool FLAG  = false;
   const int s = 10;
   const int n = 5;
   int SUB = s - n;
   if(SUB == 5)
   {

      FLAG = true;
   }
   else{

      FLAG =false;
   }

   return FLAG;
}
   void DELAY(void)
   {
      for (uint32_t i = 0; i < 5000000; i++);
   }
   
   /**
    * @brief WINDOW STATUS
    * @author Aishwarya Hosamani
    */
   void LOCK(void)
   {
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, LED_On);
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, LED_On);
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, LED_On);
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, LED_On);

   }
   /**
    * @brief ALARM STATUS
    * @author Vooke Kethan
    */
   void UNLOCK(void)
   {
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, LED_Off);
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, LED_Off);
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, LED_Off);
      GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, LED_Off);

   }
   /**
    * @brief CAR BATTERY INFO
    * @author Sainimitha Mullapudi
    */
   void ALARM(void)
   {
      
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
      DELAY();
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
      DELAY();
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
      DELAY();
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
      DELAY();

   }
   /**
    * @brief DOOR STATUS
    * @author Tummallapalli Benarji Kumar 
    */

   void LIGHT_APPROACH(void)
   {
     
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
      DELAY();
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
      DELAY();
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
      DELAY();
      GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
      DELAY();
      
   }
   /**
    * @brief MAIN FUNCTION
    * @author Sainimitha Mullapudi
    * @return int 
    */
   int main(void)
   {   
      int count = 0;
      GPIO_Handle_t GpioLed, GPIOBtn, GpioLed1, GpioLed2, GpioLed3;
       // FOR GREEN LED
      GpioLed.pGPIOx = GPIOD;
      GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
      GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
      GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
      GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
      GPIO_PeriClockControl(GPIOD, ENABLE);
      GPIO_Init(&GpioLed);

       // FOR ORANGE LED 
      GpioLed1.pGPIOx = GPIOD;
      GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
      GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
      GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
      GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
      GPIO_PeriClockControl(GPIOD, ENABLE);
      GPIO_Init(&GpioLed1);

      // FOR RED LED
      GpioLed2.pGPIOx = GPIOD;
      GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
      GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
      GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
      GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
      GPIO_PeriClockControl(GPIOD, ENABLE);
      GPIO_Init(&GpioLed2);

      // FOR BLUE LED
      GpioLed3.pGPIOx = GPIOD;
      GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
      GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
      GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
      GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
      GPIO_PeriClockControl(GPIOD, ENABLE);
      GPIO_Init(&GpioLed3);

      // FOR BUTTON 
      GPIOBtn.pGPIOx = GPIOA;
      GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
      GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
      GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
      GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
      GPIO_PeriClockControl(GPIOA, ENABLE);
      GPIO_Init(&GPIOBtn);
      
      if (ENCRYPTION())
      {

         while (1)
         {
            if (GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BUTTON_PRESS)
            {
               DELAY();
               count = count + 1;
            }
            if (count == 3)
            {
               LOCK();
            }
            else if (count == 9)
            {
                UNLOCK();
            }
            else if (count==18)
            {

               ALARM();
            }
            else if (count==27)
            {
               LIGHT_APPROACH();
            }
         }
      }
   }