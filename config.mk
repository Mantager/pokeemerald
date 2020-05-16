### Build Configuration ###

# Default variables
GAME_VERSION  ?= EMERALD
GAME_REVISION ?= 0
GAME_LANGUAGE ?= ENGLISH
GAME_CODE     ?= BPEE
DEBUG         ?= 0
MODERN        ?= 0
DEBUG_TRANSLATE ?= 0
COMPARE  ?= 0

# For gbafix
MAKER_CODE  := 01

# Version
ifeq ($(GAME_LANGUAGE), ENGLISH)
  BUILD_NAME := gaidenone_en
else
ifeq ($(GAME_LANGUAGE), JAPANESE)
  BUILD_NAME := gaidenone_jp
else
  $(error unknown version $(GAME_VERSION))
endif
endif
