cmd_arch/arm/boot/dts/imx6s-tinyrex.dtb := /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/arm-none-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6s-tinyrex.dtb.d.pre.tmp -nostdinc -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include -I/home/fedevel/tiny/linux/linux-fslc/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6s-tinyrex.dtb.dts.tmp arch/arm/boot/dts/imx6s-tinyrex.dts ; /home/fedevel/tiny/linux/linux-fslc/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6s-tinyrex.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6s-tinyrex.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6s-tinyrex.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6s-tinyrex.dtb.d.pre.tmp arch/arm/boot/dts/.imx6s-tinyrex.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6s-tinyrex.dtb.d

source_arch/arm/boot/dts/imx6s-tinyrex.dtb := arch/arm/boot/dts/imx6s-tinyrex.dts

deps_arch/arm/boot/dts/imx6s-tinyrex.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6qdl-tinyrex.dtsi \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/input/input.h \

arch/arm/boot/dts/imx6s-tinyrex.dtb: $(deps_arch/arm/boot/dts/imx6s-tinyrex.dtb)

$(deps_arch/arm/boot/dts/imx6s-tinyrex.dtb):
