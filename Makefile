# Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./moduleProgrammingQuestions

# Source files and output binary
SRC = moduleProgrammingMain.cpp $(wildcard moduleProgrammingQuestions/*.cpp)
OUT = ModularProgram

# Default build
all: $(OUT)

# Linking and compiling
$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Clean build files
clean:
	rm -f $(OUT)
