cmd_/home/kaya/kernelLearning/DeviceNumAndFiles/modules.order := {   echo /home/kaya/kernelLearning/DeviceNumAndFiles/dev_nr.ko; :; } | awk '!x[$$0]++' - > /home/kaya/kernelLearning/DeviceNumAndFiles/modules.order