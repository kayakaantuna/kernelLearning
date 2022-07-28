cmd_/home/kaya/kernelLearning/PWMDriver/modules.order := {   echo /home/kaya/kernelLearning/PWMDriver/pwm_driver.ko; :; } | awk '!x[$$0]++' - > /home/kaya/kernelLearning/PWMDriver/modules.order
