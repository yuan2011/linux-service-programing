all:
	$(MAKE) ARCH=$(ARCH) BUILD_OPT="$(BUILD_OPT)" -C src

test:
	@echo test

clean:
	$(MAKE) ARCH=$(ARCH) -C src clean

.PHONY : all test clean
