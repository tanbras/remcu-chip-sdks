python ~/MOCD/AddressInterceptor/mcu-lib/parser/header2.py -c '-Wfatal-errors -DUSE_FULL_LL_DRIVER -DREMCU_LIB -DSTM32F723xx -I/home/ser/MOCD/AddressInterceptor/mcu-lib/stm32/stm32f7/STM32CubeF7/Drivers/STM32F7xx_HAL_Driver/transformed_Inc/ -I/home/ser/MOCD/AddressInterceptor/mcu-lib/stm32/stm32f7/STM32CubeF7/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I/home/ser/MOCD/AddressInterceptor/mcu-lib/stm32/stm32f7/STM32CubeF7/Drivers/CMSIS/Include -I/home/ser/MOCD/AddressInterceptor/mcu-lib/stm32/stm32f7/STM32CubeF7/Drivers/STM32F7xx_HAL_Driver/STM32F723xx  -Werror=implicit-function-declaration -Wno-int-to-pointer-cast -Wno-constant-conversion -I/home/ser/MOCD/AddressInterceptor/mcu-lib/stm32/stm32f7/STM32CubeF7/CMSIS/Device/ST/STM32F7xx/Include' \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_fmc.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_adc.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_rcc.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_spi.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_crc.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_tim.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_usart.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_system.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_iwdg.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_rtc.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_i2c.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_lptim.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_dac.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_rng.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_bus.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_dma2d.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_gpio.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_utils.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_wwdg.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_exti.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_sdmmc.h \
-f ../Drivers/STM32F7xx_HAL_Driver/transformed_Inc/stm32f7xx_ll_dma.h \
--version=v1.16.0-`git rev-parse --short HEAD` -o STM32F723xx_LowLayer_HAL_drivers.py -d 1
