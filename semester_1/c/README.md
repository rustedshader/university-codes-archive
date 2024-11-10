# C Experiments

This repository contains C programming experiment exercises and classroom exercises.

## Building the Project ⚒️⚙️

To compile all `.c` files into the `./bin` directory, run:
```bash
make
```

## Project Structure

- `bin/` - Contains compiled executables
- `experiment_1/` to `experiment_9/` - Individual experiment folders
- `classroom/` - Classroom exercises
- `screenshots/` - Contains code screenshots generated using Silicon
- `Makefile` - Build configuration
- `generate_screenshot.sh` - Script to generate code screenshots

## Prerequisites

- GCC compiler
- Make utility
- [Silicon](https://github.com/Aloxaf/Silicon) - For generating beautiful code screenshots

## Usage

1. Navigate to the project directory
2. Run `make` to compile all programs
3. Executables will be available in the `bin/` directory

## Generating Code Screenshots

You can automatically generate beautiful code screenshots for all experiment files:

1. Make sure you have Silicon installed:
   ```bash
   # On macOS
   brew install silicon
   
   # On Arch Linux
   yay -S silicon
   
   # On other Linux distributions
   cargo install silicon
   ```

2. Run the screenshot generation script:
   ```bash
   ./generate_screenshot.sh
   ```

This will:
- Create a `screenshots` directory if it doesn't exist
- Generate high-quality PNG screenshots of all `.c` files
- Save them in the `screenshots` directory with corresponding names

The generated screenshots can be used for:
- Documentation
- Presentations
- Sharing code on social media
- Assignment submissions

## Development

Each experiment is organized in its own directory with corresponding source files.
