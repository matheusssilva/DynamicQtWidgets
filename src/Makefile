#compiler
CXX = g++

#path for Qt
QT = /opt/Qt/5.3/gcc_64

#path for libs Qt
LIBSQT = -L$(QT)/lib/

#path for includes Qt
INCSQT = -I$(QT)/include/

#generate final lib
libdynamicqtwidgets.so: dynamicqtwidgets.o
	$(CXX) -Wall -shared -o ../build/$@ ../build/$< $(LIBSQT) -lQt5Core -lQt5Widgets -lQt5UiTools
	
#generate dynamicqtwidgets.o
dynamicqtwidgets.o: dynamicqtwidgets.cpp dynamicqtwidgets.hpp dynamicqtwidgets_global.hpp
	$(CXX) -Wall -c -fPIC -o ../build/$@ $< $(INCSQT)

