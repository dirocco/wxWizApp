##############################################################
# Name:        makefile for wxWizApp
# Purpose:     
# Author:      
# Modified by: 
# Created:     
# RCS-ID:      
# Copyright:   (C)2003 
# Licence:     
##############################################################

CC = g++
CXX = $(shell ../../bin/wx-config --cxx)

PROGRAM = wxWizApp

SOURCES:= $(wildcard *.cpp)

OBJECTS = $(SOURCES:.cpp=.o)

LFLAGS = `../../bin/wx-config --prefix=../.. --libs` -lz

CFLAGS = -I../../include

ifeq ($(build_vendor),apple)
MACBLESS = Rez -d __DARWIN__ -t APPL -d __WXMAC__ -i . Carbon.r -o 
else
MACBLESS = echo
endif

# implementation

.SUFFIXES:      .o .cpp

.cpp.o :
	$(CC) -c `../../bin/wx-config --cxxflags` $(CFLAGS) -o $@ $<

$(PROGRAM): $(OBJECTS) 
	$(CXX) -o $(PROGRAM) $(OBJECTS) $(CFLAGS) $(LFLAGS) 
	$(MACBLESS) $(PROGRAM)

clean:
	rm -f *.o $(PROGRAM)

