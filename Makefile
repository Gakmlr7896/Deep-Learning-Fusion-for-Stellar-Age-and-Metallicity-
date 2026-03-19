CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall
LIBS = -lcfitsio

TARGET = dataloader
SRC = src/dataloader.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET)

.PHONY: all clean

run: all
	./dataloader