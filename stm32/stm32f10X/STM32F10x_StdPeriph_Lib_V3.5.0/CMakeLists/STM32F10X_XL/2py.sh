python ../../../../../parser/header2.py -c '-DSTM32F10X_XL -DUSE_STDPERIPH_DRIVER -DREMCU_LIB -w -I. -I../../Libraries/CMSIS/CM3/CoreSupport -I../../Project/STM32F10x_StdPeriph_Template/' -a ../../Libraries/STM32F10x_StdPeriph_Driver/inc/ -a ../../Libraries/CMSIS/CM3/DeviceSupport/ST/STM32F10x/ --version=v3.5.0-`git rev-parse --short HEAD` -o STM32F10X_XL_StdPeriph_Lib.py
