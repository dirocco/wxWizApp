##############################################################################
# 
# config.mak
#
# By: H. Gregory Silber
#

#subdirectories of the directory
CHILDDIRS=

#the path to the directory which contains configure for this directory
CONFIGROOT=..

include ../../include/make-includes/config.make.inc
include ../../include/make-includes/config.child.make.inc
