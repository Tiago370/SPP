CXXFLAGS += -O3 -std=c++11 -Wall -Wextra -pedantic-errors

all: build/SPP

build/SPP: build/main.o build/rect.o
	$(CXX) $(CXXFLAGS) -o build/SPP build/*.o

build/main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o build/main.o

build/rect.o: src/rect.cpp
	$(CXX) $(CXXFLAGS) -c src/rect.cpp -o build/rect.o

clean:
	$(RM) build/*.o build/SPP
