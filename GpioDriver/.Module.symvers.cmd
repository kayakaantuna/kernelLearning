cmd_/home/kaya/kernelLearning/GpioDriver/Module.symvers := sed 's/\.ko$$/\.o/' /home/kaya/kernelLearning/GpioDriver/modules.order | scripts/mod/modpost -m -a  -o /home/kaya/kernelLearning/GpioDriver/Module.symvers -e -i Module.symvers   -T -
