#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := ESP_Flight
EXTRA_COMPONENT_DIRS += $(PROJECT_PATH)/drivers
EXTRA_COMPONENT_DIRS += $(PROJECT_PATH)/boards

include $(IDF_PATH)/make/project.mk

