# name of your application
APPLICATION = timers_example

# Change this to your board if you want to build for a different board
BOARD ?= native

# This has to be the absolute path to the RIOT base directory:
# If you are following the tutorial, your RIOT base directory will
# most likely be something like RIOTBASE ?= $(CURDIR)/RIOT
# instead of this
RIOTBASE ?= $(CURDIR)/../../..

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Import the ztimer_sec module so we can sleep
USEMODULE += ztimer_sec

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include
