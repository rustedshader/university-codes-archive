CC = gcc

BUILD_DIR = ./bin
SRC_DIR = .

SOURCES := $(shell find $(SRC_DIR) -name '*.c')
EXECUTABLES := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%,$(SOURCES))

all: $(BUILD_DIR) $(EXECUTABLES)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to compile .c files
$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $< -o $@

# Clean target
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean
