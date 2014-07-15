#compiler
CXX = g++

#path for Qt
QT = /opt/Qt/5.3/gcc_64

#path for libs Qt
LIBSQT = -L$(QT)/lib/

#path for includes Qt
INCSQT = -I$(QT)/include/

#path for include taget test
INCOBJTEST = -I../src

#path for moc files
MOCS = -I../mocs

#path for taget test
OBJTEST = -L../build

#All includes
INCS = $(INCSQT) $(MOCS) $(INCOBJTEST) -I.

#All libs
LIBS = $(LIBSQT) $(OBJTEST)

#final target
Test: dynamicqtwidgetstest.moc main.cpp dynamicqtwidgetstest.cpp dynamicqtwidgetstest.hpp 
	$(CXX) -Wall -fPIC -o ../build/$@ $(word 2,$^) $(word 3,$^) $(INCS) -Wl,-rpath,'$$ORIGIN' $(LIBS) -lQt5Widgets -lQt5Core -lQt5Test -ldynamicqtwidgets

#Generate moc file	
dynamicqtwidgetstest.moc: dynamicqtwidgetstest.hpp
	moc $< -o ../mocs/$@
	
