cmd_arch/arm/mach-imx/ddr3_freq_imx6.o := /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/mach-imx/.ddr3_freq_imx6.o.d  -nostdinc -isystem /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/../lib/gcc/arm-fsl-linux-gnueabi/4.6.2/include -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/fedevel/tiny/linux/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/fedevel/tiny/linux/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float      -Wa,-march=armv7-a   -c -o arch/arm/mach-imx/ddr3_freq_imx6.o arch/arm/mach-imx/ddr3_freq_imx6.S

source_arch/arm/mach-imx/ddr3_freq_imx6.o := arch/arm/mach-imx/ddr3_freq_imx6.S

deps_arch/arm/mach-imx/ddr3_freq_imx6.o := \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cache/l2x0.h) \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/include/asm/linkage.h \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/include/asm/smp_scu.h \
    $(wildcard include/config/have/arm/scu.h) \
  arch/arm/mach-imx/hardware.h \
  arch/arm/include/generated/asm/sizes.h \
  include/asm-generic/sizes.h \
  include/linux/sizes.h \
  arch/arm/mach-imx/mxc.h \
    $(wildcard include/config/soc/imx1.h) \
    $(wildcard include/config/soc/imx21.h) \
    $(wildcard include/config/soc/imx25.h) \
    $(wildcard include/config/soc/imx27.h) \
    $(wildcard include/config/soc/imx31.h) \
    $(wildcard include/config/soc/imx35.h) \
    $(wildcard include/config/soc/imx51.h) \
    $(wildcard include/config/soc/imx53.h) \
    $(wildcard include/config/soc/imx6sl.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  arch/arm/mach-imx/mx51.h \
    $(wildcard include/config/sdma/iram.h) \
  /home/fedevel/tiny/linux/linux-fslc/arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/multi/irq/handler.h) \
  arch/arm/mach-imx/mx53.h \
  arch/arm/mach-imx/mx3x.h \
  arch/arm/mach-imx/mx31.h \
  arch/arm/mach-imx/mx35.h \
  arch/arm/mach-imx/mx2x.h \
  arch/arm/mach-imx/mx21.h \
  arch/arm/mach-imx/mx27.h \
  arch/arm/mach-imx/mx1.h \
  arch/arm/mach-imx/mx25.h \
  arch/arm/mach-imx/mx6.h \

arch/arm/mach-imx/ddr3_freq_imx6.o: $(deps_arch/arm/mach-imx/ddr3_freq_imx6.o)

$(deps_arch/arm/mach-imx/ddr3_freq_imx6.o):
