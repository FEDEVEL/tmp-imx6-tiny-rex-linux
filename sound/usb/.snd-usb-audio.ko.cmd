cmd_sound/usb/snd-usb-audio.ko := /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/arm-none-linux-gnueabi-ld -EL -r  -T /home/fedevel/tiny/linux/linux-fslc/scripts/module-common.lds --build-id  -o sound/usb/snd-usb-audio.ko sound/usb/snd-usb-audio.o sound/usb/snd-usb-audio.mod.o