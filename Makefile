# Compiler and flags
CC = g++
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS =

# Directories
SRCDIR = src
INCDIR = include
OBJDIR = obj
BINDIR = bin

# Files
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS := $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))
TARGET := $(BINDIR)/emulator

# Default rule
all: $(TARGET)

# Link
$(TARGET): $(OBJECTS) | $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compile
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create directories
$(OBJDIR):
	mkdir -p $(OBJDIR)

$(BINDIR):
	mkdir -p $(BINDIR)

# Clean up
clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY: all clean
