include ../Makefile.drivers_common

USEMODULE += hd44780

# disable native GPIOs for automatic test
ifneq (,$(filter native native32 native64,$(BOARD)))
  USEMODULE += periph_gpio_mock
endif

USEMODULE += ztimer
USEMODULE += ztimer_sec

include $(RIOTBASE)/Makefile.include
