CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

SRCS = main.cpp src/binary_tree.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = main

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)