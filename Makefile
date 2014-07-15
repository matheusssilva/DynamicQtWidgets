#Makefile master

all: build
	cd src; make
	cd tests; make

#clear build
clean:
	-rm -f -R *.o *~ *.so  *.moc build mocs
	cd src; rm -f *.o *~ *.so  *.moc
	cd tests; rm -f *.o *~ *.so  *.moc

#create build dir
build:
	mkdir -p build
	mkdir -p mocs
	cp -i tests/*.ui build/

