cmd_arch/arm/boot/dts/imx6sl-evk-uart.dtb := /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/arm-none-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6sl-evk-uart.dtb.d.pre.tmp -nostdinc -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include -I/home/fedevel/tiny/linux/linux-fslc/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sl-evk-uart.dtb.dts.tmp arch/arm/boot/dts/imx6sl-evk-uart.dts ; /home/fedevel/tiny/linux/linux-fslc/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sl-evk-uart.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6sl-evk-uart.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sl-evk-uart.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sl-evk-uart.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sl-evk-uart.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sl-evk-uart.dtb.d

source_arch/arm/boot/dts/imx6sl-evk-uart.dtb := arch/arm/boot/dts/imx6sl-evk-uart.dts

deps_arch/arm/boot/dts/imx6sl-evk-uart.dtb := \
  arch/arm/boot/dts/imx6sl-evk.dts \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/imx6sl.dtsi \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/imx6sl-pinfunc.h \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/boot/dts/include/dt-bindings/clock/imx6sl-clock.h \

arch/arm/boot/dts/imx6sl-evk-uart.dtb: $(deps_arch/arm/boot/dts/imx6sl-evk-uart.dtb)

$(deps_arch/arm/boot/dts/imx6sl-evk-uart.dtb):
