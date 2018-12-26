all:
	$(MAKE) ARCH=$(ARCH) BUILD_OPT="$(BUILD_OPT)" -C src

clean:
	$(MAKE) ARCH=$(ARCH) -C src clean

.PHONY : all clean
