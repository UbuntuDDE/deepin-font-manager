######################################################################
# Automatically generated by qmake (3.0) ?? 11? 30 09:55:49 2017
######################################################################

TEMPLATE = subdirs

SUBDIRS += \
           deepin-font-manager\
           libdeepin-font-manager \
           deepin-font-preview-plugin
#           dfont-install \
#	   dfont-uninstall

deepin-font-manager.depends = libdeepin-font-manager
deepin-font-preview-plugin.depends = libdeepin-font-manager
#dfont-install.depends = libdeepin-font-manager
CMAKE_CXX_FLAGS += -Wall -Wextra
