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
CXX = $(shell wx-config --cxx)

PROGRAM = wxWizApp

SOURCES:= $(wildcard *.cpp)

OBJECTS = $(SOURCES:.cpp=.o)

LFLAGS = `wx-config --prefix=../.. --libs`

CFLAGS = -I../../include

# implementation

.SUFFIXES:      .o .cpp

.cpp.o :
	$(CC) -c `wx-config --cxxflags` $(CFLAGS) -o $@ $<

$(PROGRAM): $(OBJECTS) 
	$(CXX) -o $(PROGRAM) $(OBJECTS) $(CFLAGS) $(LFLAGS) 

clean:
	rm -f *.o $(PROGRAM)

