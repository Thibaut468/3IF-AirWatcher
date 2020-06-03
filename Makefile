CC=g++
CFLAGS= -Wall -Werror -ansi -pedantic -std=c++11
DFLAGS= 

MAIN=AirWatcher
MAINTEST=mainTest
EXECSRC=Controleur.cpp
TESTSRC=mainTest.cpp
COMMONSRC=$(filter-out $(TESTSRC) $(EXECSRC),$(wildcard *.cpp))

$(MAIN): $(EXECSRC) $(COMMONSRC)
	$(CC) $(DFLAGS) -o $@ $^

.PHONY : launch
launch : $(MAIN)
	./$(MAIN)

.PHONY : clean
clean:
	rm -f $(MAIN) $(MAINTEST) *.o core

$(MAINTEST): $(TESTSRC) $(COMMONSRC)
	$(CC) $(DFLAGS) -o $@ $^

.PHONY: test
test : $(MAINTEST)
	./$(MAINTEST)