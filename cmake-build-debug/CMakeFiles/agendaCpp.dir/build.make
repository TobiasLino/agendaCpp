# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/agendaCpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/agendaCpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/agendaCpp.dir/flags.make

CMakeFiles/agendaCpp.dir/tests/test.cpp.o: CMakeFiles/agendaCpp.dir/flags.make
CMakeFiles/agendaCpp.dir/tests/test.cpp.o: ../tests/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/agendaCpp.dir/tests/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaCpp.dir/tests/test.cpp.o -c /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/tests/test.cpp

CMakeFiles/agendaCpp.dir/tests/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaCpp.dir/tests/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/tests/test.cpp > CMakeFiles/agendaCpp.dir/tests/test.cpp.i

CMakeFiles/agendaCpp.dir/tests/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaCpp.dir/tests/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/tests/test.cpp -o CMakeFiles/agendaCpp.dir/tests/test.cpp.s

CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.o: CMakeFiles/agendaCpp.dir/flags.make
CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.o: ../include/agendacpp/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.o -c /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/client.cpp

CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/client.cpp > CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.i

CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/client.cpp -o CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.s

CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.o: CMakeFiles/agendaCpp.dir/flags.make
CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.o: ../include/agendacpp/phone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.o -c /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/phone.cpp

CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/phone.cpp > CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.i

CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/phone.cpp -o CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.s

CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.o: CMakeFiles/agendaCpp.dir/flags.make
CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.o: ../include/agendacpp/errors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.o -c /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/errors.cpp

CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/errors.cpp > CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.i

CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/include/agendacpp/errors.cpp -o CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.s

CMakeFiles/agendaCpp.dir/src/menu.cpp.o: CMakeFiles/agendaCpp.dir/flags.make
CMakeFiles/agendaCpp.dir/src/menu.cpp.o: ../src/menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/agendaCpp.dir/src/menu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaCpp.dir/src/menu.cpp.o -c /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/src/menu.cpp

CMakeFiles/agendaCpp.dir/src/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaCpp.dir/src/menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/src/menu.cpp > CMakeFiles/agendaCpp.dir/src/menu.cpp.i

CMakeFiles/agendaCpp.dir/src/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaCpp.dir/src/menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/src/menu.cpp -o CMakeFiles/agendaCpp.dir/src/menu.cpp.s

CMakeFiles/agendaCpp.dir/src/agenda.cpp.o: CMakeFiles/agendaCpp.dir/flags.make
CMakeFiles/agendaCpp.dir/src/agenda.cpp.o: ../src/agenda.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/agendaCpp.dir/src/agenda.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaCpp.dir/src/agenda.cpp.o -c /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/src/agenda.cpp

CMakeFiles/agendaCpp.dir/src/agenda.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaCpp.dir/src/agenda.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/src/agenda.cpp > CMakeFiles/agendaCpp.dir/src/agenda.cpp.i

CMakeFiles/agendaCpp.dir/src/agenda.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaCpp.dir/src/agenda.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/src/agenda.cpp -o CMakeFiles/agendaCpp.dir/src/agenda.cpp.s

# Object files for target agendaCpp
agendaCpp_OBJECTS = \
"CMakeFiles/agendaCpp.dir/tests/test.cpp.o" \
"CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.o" \
"CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.o" \
"CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.o" \
"CMakeFiles/agendaCpp.dir/src/menu.cpp.o" \
"CMakeFiles/agendaCpp.dir/src/agenda.cpp.o"

# External object files for target agendaCpp
agendaCpp_EXTERNAL_OBJECTS =

agendaCpp: CMakeFiles/agendaCpp.dir/tests/test.cpp.o
agendaCpp: CMakeFiles/agendaCpp.dir/include/agendacpp/client.cpp.o
agendaCpp: CMakeFiles/agendaCpp.dir/include/agendacpp/phone.cpp.o
agendaCpp: CMakeFiles/agendaCpp.dir/include/agendacpp/errors.cpp.o
agendaCpp: CMakeFiles/agendaCpp.dir/src/menu.cpp.o
agendaCpp: CMakeFiles/agendaCpp.dir/src/agenda.cpp.o
agendaCpp: CMakeFiles/agendaCpp.dir/build.make
agendaCpp: CMakeFiles/agendaCpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable agendaCpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/agendaCpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/agendaCpp.dir/build: agendaCpp

.PHONY : CMakeFiles/agendaCpp.dir/build

CMakeFiles/agendaCpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/agendaCpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/agendaCpp.dir/clean

CMakeFiles/agendaCpp.dir/depend:
	cd /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug /home/tobias/Documentos/Faculdade/3o_semestre/PI/agendaCpp/cmake-build-debug/CMakeFiles/agendaCpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/agendaCpp.dir/depend

