CXX = g++
CXXFLAGS = -Iinclude -Wall -Wextra -std=c++11
SRC = main.cpp scanner.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = scanner

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)