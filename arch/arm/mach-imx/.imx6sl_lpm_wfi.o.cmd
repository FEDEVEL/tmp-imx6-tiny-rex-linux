cmd_arch/arm/mach-imx/imx6sl_lpm_wfi.o := /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/mach-imx/.imx6sl_lpm_wfi.o.d  -nostdinc -isystem /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/../lib/gcc/arm-fsl-linux-gnueabi/4.6.2/include -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/fedevel/tiny/linux/linux-fslc/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/fedevel/tiny/linux/linux-fslc/include/uapi -Iinclude/generated/uapi -include /home/fedevel/tiny/linux/linux-fslc/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float      -Wa,-march=armv7-a   -c -o arch/arm/mach-imx/imx6sl_lpm_wfi.o arch/arm/mach-imx/imx6sl_lpm_wfi.S

source_arch/arm/mach-imx/imx6sl_lpm_wfi.o := arch/arm/mach-imx/imx6sl_lpm_wfi.S

deps_arch/arm/mach-imx/imx6sl_lpm_wfi.o := \
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

arch/arm/mach-imx/imx6sl_lpm_wfi.o: $(deps_arch/arm/mach-imx/imx6sl_lpm_wfi.o)

$(deps_arch/arm/mach-imx/imx6sl_lpm_wfi.o):
