project('CloneDB', 'cpp')

# Define the source files located in the src directory
src_files = files('src/main.cpp', 'src/RegularCommand.cpp', 'src/MetaCommand.cpp', 'src/InputBuffer.cpp')

# Define the include directory (where header files are located)
include_dirs = include_directories('src')

# Define the executable, passing in the source files and include directories
executable('CloneDB', src_files, include_directories: include_dirs)
