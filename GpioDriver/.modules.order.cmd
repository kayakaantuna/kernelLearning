cmd_/home/kaya/kernelLearning/GpioDriver/modules.order := {   echo /home/kaya/kernelLearning/GpioDriver/gpio_driver.ko; :; } | awk '!x[$$0]++' - > /home/kaya/kernelLearning/GpioDriver/modules.order
