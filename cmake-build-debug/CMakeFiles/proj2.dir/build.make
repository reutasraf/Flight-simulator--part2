# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/reut/Downloads/clion-2018.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/reut/Downloads/clion-2018.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/reut/CLionProjects/part2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/reut/CLionProjects/part2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/proj2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/proj2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proj2.dir/flags.make

CMakeFiles/proj2.dir/main.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proj2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/main.cpp.o -c /home/reut/CLionProjects/part2/main.cpp

CMakeFiles/proj2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/main.cpp > CMakeFiles/proj2.dir/main.cpp.i

CMakeFiles/proj2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/main.cpp -o CMakeFiles/proj2.dir/main.cpp.s

CMakeFiles/proj2.dir/MySerialServer.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/MySerialServer.cpp.o: ../MySerialServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/proj2.dir/MySerialServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/MySerialServer.cpp.o -c /home/reut/CLionProjects/part2/MySerialServer.cpp

CMakeFiles/proj2.dir/MySerialServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/MySerialServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/MySerialServer.cpp > CMakeFiles/proj2.dir/MySerialServer.cpp.i

CMakeFiles/proj2.dir/MySerialServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/MySerialServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/MySerialServer.cpp -o CMakeFiles/proj2.dir/MySerialServer.cpp.s

CMakeFiles/proj2.dir/MyTestClientHandler.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/MyTestClientHandler.cpp.o: ../MyTestClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/proj2.dir/MyTestClientHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/MyTestClientHandler.cpp.o -c /home/reut/CLionProjects/part2/MyTestClientHandler.cpp

CMakeFiles/proj2.dir/MyTestClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/MyTestClientHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/MyTestClientHandler.cpp > CMakeFiles/proj2.dir/MyTestClientHandler.cpp.i

CMakeFiles/proj2.dir/MyTestClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/MyTestClientHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/MyTestClientHandler.cpp -o CMakeFiles/proj2.dir/MyTestClientHandler.cpp.s

CMakeFiles/proj2.dir/FileCacheManager.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/FileCacheManager.cpp.o: ../FileCacheManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/proj2.dir/FileCacheManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/FileCacheManager.cpp.o -c /home/reut/CLionProjects/part2/FileCacheManager.cpp

CMakeFiles/proj2.dir/FileCacheManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/FileCacheManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/FileCacheManager.cpp > CMakeFiles/proj2.dir/FileCacheManager.cpp.i

CMakeFiles/proj2.dir/FileCacheManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/FileCacheManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/FileCacheManager.cpp -o CMakeFiles/proj2.dir/FileCacheManager.cpp.s

CMakeFiles/proj2.dir/StringReverser.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/StringReverser.cpp.o: ../StringReverser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/proj2.dir/StringReverser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/StringReverser.cpp.o -c /home/reut/CLionProjects/part2/StringReverser.cpp

CMakeFiles/proj2.dir/StringReverser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/StringReverser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/StringReverser.cpp > CMakeFiles/proj2.dir/StringReverser.cpp.i

CMakeFiles/proj2.dir/StringReverser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/StringReverser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/StringReverser.cpp -o CMakeFiles/proj2.dir/StringReverser.cpp.s

CMakeFiles/proj2.dir/SocketWrite.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/SocketWrite.cpp.o: ../SocketWrite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/proj2.dir/SocketWrite.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/SocketWrite.cpp.o -c /home/reut/CLionProjects/part2/SocketWrite.cpp

CMakeFiles/proj2.dir/SocketWrite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/SocketWrite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/SocketWrite.cpp > CMakeFiles/proj2.dir/SocketWrite.cpp.i

CMakeFiles/proj2.dir/SocketWrite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/SocketWrite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/SocketWrite.cpp -o CMakeFiles/proj2.dir/SocketWrite.cpp.s

CMakeFiles/proj2.dir/SocketRead.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/SocketRead.cpp.o: ../SocketRead.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/proj2.dir/SocketRead.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/SocketRead.cpp.o -c /home/reut/CLionProjects/part2/SocketRead.cpp

CMakeFiles/proj2.dir/SocketRead.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/SocketRead.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/SocketRead.cpp > CMakeFiles/proj2.dir/SocketRead.cpp.i

CMakeFiles/proj2.dir/SocketRead.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/SocketRead.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/SocketRead.cpp -o CMakeFiles/proj2.dir/SocketRead.cpp.s

CMakeFiles/proj2.dir/MyClientHandler.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/MyClientHandler.cpp.o: ../MyClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/proj2.dir/MyClientHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/MyClientHandler.cpp.o -c /home/reut/CLionProjects/part2/MyClientHandler.cpp

CMakeFiles/proj2.dir/MyClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/MyClientHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/MyClientHandler.cpp > CMakeFiles/proj2.dir/MyClientHandler.cpp.i

CMakeFiles/proj2.dir/MyClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/MyClientHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/MyClientHandler.cpp -o CMakeFiles/proj2.dir/MyClientHandler.cpp.s

CMakeFiles/proj2.dir/Test.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/Test.cpp.o: ../Test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/proj2.dir/Test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/Test.cpp.o -c /home/reut/CLionProjects/part2/Test.cpp

CMakeFiles/proj2.dir/Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/Test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/Test.cpp > CMakeFiles/proj2.dir/Test.cpp.i

CMakeFiles/proj2.dir/Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/Test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/Test.cpp -o CMakeFiles/proj2.dir/Test.cpp.s

CMakeFiles/proj2.dir/State.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/State.cpp.o: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/proj2.dir/State.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/State.cpp.o -c /home/reut/CLionProjects/part2/State.cpp

CMakeFiles/proj2.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/State.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/State.cpp > CMakeFiles/proj2.dir/State.cpp.i

CMakeFiles/proj2.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/State.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/State.cpp -o CMakeFiles/proj2.dir/State.cpp.s

CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.o: ../BreadthFirstSearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.o -c /home/reut/CLionProjects/part2/BreadthFirstSearch.cpp

CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/BreadthFirstSearch.cpp > CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.i

CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/BreadthFirstSearch.cpp -o CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.s

CMakeFiles/proj2.dir/dddd.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/dddd.cpp.o: ../dddd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/proj2.dir/dddd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/dddd.cpp.o -c /home/reut/CLionProjects/part2/dddd.cpp

CMakeFiles/proj2.dir/dddd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/dddd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/dddd.cpp > CMakeFiles/proj2.dir/dddd.cpp.i

CMakeFiles/proj2.dir/dddd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/dddd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/dddd.cpp -o CMakeFiles/proj2.dir/dddd.cpp.s

CMakeFiles/proj2.dir/MyParallelServer.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/MyParallelServer.cpp.o: ../MyParallelServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/proj2.dir/MyParallelServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/MyParallelServer.cpp.o -c /home/reut/CLionProjects/part2/MyParallelServer.cpp

CMakeFiles/proj2.dir/MyParallelServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/MyParallelServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/MyParallelServer.cpp > CMakeFiles/proj2.dir/MyParallelServer.cpp.i

CMakeFiles/proj2.dir/MyParallelServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/MyParallelServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/MyParallelServer.cpp -o CMakeFiles/proj2.dir/MyParallelServer.cpp.s

CMakeFiles/proj2.dir/IndexsMat.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/IndexsMat.cpp.o: ../IndexsMat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/proj2.dir/IndexsMat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/IndexsMat.cpp.o -c /home/reut/CLionProjects/part2/IndexsMat.cpp

CMakeFiles/proj2.dir/IndexsMat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/IndexsMat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/IndexsMat.cpp > CMakeFiles/proj2.dir/IndexsMat.cpp.i

CMakeFiles/proj2.dir/IndexsMat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/IndexsMat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/IndexsMat.cpp -o CMakeFiles/proj2.dir/IndexsMat.cpp.s

CMakeFiles/proj2.dir/MatrixSearchable.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/MatrixSearchable.cpp.o: ../MatrixSearchable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/proj2.dir/MatrixSearchable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/MatrixSearchable.cpp.o -c /home/reut/CLionProjects/part2/MatrixSearchable.cpp

CMakeFiles/proj2.dir/MatrixSearchable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/MatrixSearchable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/MatrixSearchable.cpp > CMakeFiles/proj2.dir/MatrixSearchable.cpp.i

CMakeFiles/proj2.dir/MatrixSearchable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/MatrixSearchable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/MatrixSearchable.cpp -o CMakeFiles/proj2.dir/MatrixSearchable.cpp.s

CMakeFiles/proj2.dir/MatrixInter.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/MatrixInter.cpp.o: ../MatrixInter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/proj2.dir/MatrixInter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/MatrixInter.cpp.o -c /home/reut/CLionProjects/part2/MatrixInter.cpp

CMakeFiles/proj2.dir/MatrixInter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/MatrixInter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/MatrixInter.cpp > CMakeFiles/proj2.dir/MatrixInter.cpp.i

CMakeFiles/proj2.dir/MatrixInter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/MatrixInter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/MatrixInter.cpp -o CMakeFiles/proj2.dir/MatrixInter.cpp.s

CMakeFiles/proj2.dir/SolveSearch.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/SolveSearch.cpp.o: ../SolveSearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/proj2.dir/SolveSearch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/SolveSearch.cpp.o -c /home/reut/CLionProjects/part2/SolveSearch.cpp

CMakeFiles/proj2.dir/SolveSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/SolveSearch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/SolveSearch.cpp > CMakeFiles/proj2.dir/SolveSearch.cpp.i

CMakeFiles/proj2.dir/SolveSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/SolveSearch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/SolveSearch.cpp -o CMakeFiles/proj2.dir/SolveSearch.cpp.s

CMakeFiles/proj2.dir/DepthFirstSearch.cpp.o: CMakeFiles/proj2.dir/flags.make
CMakeFiles/proj2.dir/DepthFirstSearch.cpp.o: ../DepthFirstSearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/proj2.dir/DepthFirstSearch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2.dir/DepthFirstSearch.cpp.o -c /home/reut/CLionProjects/part2/DepthFirstSearch.cpp

CMakeFiles/proj2.dir/DepthFirstSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2.dir/DepthFirstSearch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/reut/CLionProjects/part2/DepthFirstSearch.cpp > CMakeFiles/proj2.dir/DepthFirstSearch.cpp.i

CMakeFiles/proj2.dir/DepthFirstSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2.dir/DepthFirstSearch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/reut/CLionProjects/part2/DepthFirstSearch.cpp -o CMakeFiles/proj2.dir/DepthFirstSearch.cpp.s

# Object files for target proj2
proj2_OBJECTS = \
"CMakeFiles/proj2.dir/main.cpp.o" \
"CMakeFiles/proj2.dir/MySerialServer.cpp.o" \
"CMakeFiles/proj2.dir/MyTestClientHandler.cpp.o" \
"CMakeFiles/proj2.dir/FileCacheManager.cpp.o" \
"CMakeFiles/proj2.dir/StringReverser.cpp.o" \
"CMakeFiles/proj2.dir/SocketWrite.cpp.o" \
"CMakeFiles/proj2.dir/SocketRead.cpp.o" \
"CMakeFiles/proj2.dir/MyClientHandler.cpp.o" \
"CMakeFiles/proj2.dir/Test.cpp.o" \
"CMakeFiles/proj2.dir/State.cpp.o" \
"CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.o" \
"CMakeFiles/proj2.dir/dddd.cpp.o" \
"CMakeFiles/proj2.dir/MyParallelServer.cpp.o" \
"CMakeFiles/proj2.dir/IndexsMat.cpp.o" \
"CMakeFiles/proj2.dir/MatrixSearchable.cpp.o" \
"CMakeFiles/proj2.dir/MatrixInter.cpp.o" \
"CMakeFiles/proj2.dir/SolveSearch.cpp.o" \
"CMakeFiles/proj2.dir/DepthFirstSearch.cpp.o"

# External object files for target proj2
proj2_EXTERNAL_OBJECTS =

proj2: CMakeFiles/proj2.dir/main.cpp.o
proj2: CMakeFiles/proj2.dir/MySerialServer.cpp.o
proj2: CMakeFiles/proj2.dir/MyTestClientHandler.cpp.o
proj2: CMakeFiles/proj2.dir/FileCacheManager.cpp.o
proj2: CMakeFiles/proj2.dir/StringReverser.cpp.o
proj2: CMakeFiles/proj2.dir/SocketWrite.cpp.o
proj2: CMakeFiles/proj2.dir/SocketRead.cpp.o
proj2: CMakeFiles/proj2.dir/MyClientHandler.cpp.o
proj2: CMakeFiles/proj2.dir/Test.cpp.o
proj2: CMakeFiles/proj2.dir/State.cpp.o
proj2: CMakeFiles/proj2.dir/BreadthFirstSearch.cpp.o
proj2: CMakeFiles/proj2.dir/dddd.cpp.o
proj2: CMakeFiles/proj2.dir/MyParallelServer.cpp.o
proj2: CMakeFiles/proj2.dir/IndexsMat.cpp.o
proj2: CMakeFiles/proj2.dir/MatrixSearchable.cpp.o
proj2: CMakeFiles/proj2.dir/MatrixInter.cpp.o
proj2: CMakeFiles/proj2.dir/SolveSearch.cpp.o
proj2: CMakeFiles/proj2.dir/DepthFirstSearch.cpp.o
proj2: CMakeFiles/proj2.dir/build.make
proj2: CMakeFiles/proj2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable proj2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proj2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proj2.dir/build: proj2

.PHONY : CMakeFiles/proj2.dir/build

CMakeFiles/proj2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/proj2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/proj2.dir/clean

CMakeFiles/proj2.dir/depend:
	cd /home/reut/CLionProjects/part2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/reut/CLionProjects/part2 /home/reut/CLionProjects/part2 /home/reut/CLionProjects/part2/cmake-build-debug /home/reut/CLionProjects/part2/cmake-build-debug /home/reut/CLionProjects/part2/cmake-build-debug/CMakeFiles/proj2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proj2.dir/depend

