cmd_/home/kaya/kernelLearning/HelloWorld/modules.order := {   echo /home/kaya/kernelLearning/HelloWorld/mymodule.ko; :; } | awk '!x[$$0]++' - > /home/kaya/kernelLearning/HelloWorld/modules.order
