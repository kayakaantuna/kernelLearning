cmd_/home/kaya/kernelLearning/PWMDriver/Module.symvers := sed 's/\.ko$$/\.o/' /home/kaya/kernelLearning/PWMDriver/modules.order | scripts/mod/modpost -m -a  -o /home/kaya/kernelLearning/PWMDriver/Module.symvers -e -i Module.symvers   -T -