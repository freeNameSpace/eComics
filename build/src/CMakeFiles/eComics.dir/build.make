# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/digi/Dropbox/Projects/eComics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/digi/Dropbox/Projects/eComics/build

# Include any dependencies generated for this target.
include src/CMakeFiles/eComics.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/eComics.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/eComics.dir/flags.make

src/CMakeFiles/eComics.dir/main.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/main.c.o: src/main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/main.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/main.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/main.c

src/CMakeFiles/eComics.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/main.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/main.c > CMakeFiles/eComics.dir/main.c.i

src/CMakeFiles/eComics.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/main.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/main.c -o CMakeFiles/eComics.dir/main.c.s

src/CMakeFiles/eComics.dir/main.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/main.c.o.requires

src/CMakeFiles/eComics.dir/main.c.o.provides: src/CMakeFiles/eComics.dir/main.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/main.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/main.c.o.provides

src/CMakeFiles/eComics.dir/main.c.o.provides.build: src/CMakeFiles/eComics.dir/main.c.o

src/CMakeFiles/eComics.dir/comic_connector.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/comic_connector.c.o: src/comic_connector.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/comic_connector.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/comic_connector.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/comic_connector.c

src/CMakeFiles/eComics.dir/comic_connector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/comic_connector.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/comic_connector.c > CMakeFiles/eComics.dir/comic_connector.c.i

src/CMakeFiles/eComics.dir/comic_connector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/comic_connector.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/comic_connector.c -o CMakeFiles/eComics.dir/comic_connector.c.s

src/CMakeFiles/eComics.dir/comic_connector.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/comic_connector.c.o.requires

src/CMakeFiles/eComics.dir/comic_connector.c.o.provides: src/CMakeFiles/eComics.dir/comic_connector.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/comic_connector.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/comic_connector.c.o.provides

src/CMakeFiles/eComics.dir/comic_connector.c.o.provides.build: src/CMakeFiles/eComics.dir/comic_connector.c.o

src/CMakeFiles/eComics.dir/comic_manager.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/comic_manager.c.o: src/comic_manager.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/comic_manager.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/comic_manager.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/comic_manager.c

src/CMakeFiles/eComics.dir/comic_manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/comic_manager.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/comic_manager.c > CMakeFiles/eComics.dir/comic_manager.c.i

src/CMakeFiles/eComics.dir/comic_manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/comic_manager.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/comic_manager.c -o CMakeFiles/eComics.dir/comic_manager.c.s

src/CMakeFiles/eComics.dir/comic_manager.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/comic_manager.c.o.requires

src/CMakeFiles/eComics.dir/comic_manager.c.o.provides: src/CMakeFiles/eComics.dir/comic_manager.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/comic_manager.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/comic_manager.c.o.provides

src/CMakeFiles/eComics.dir/comic_manager.c.o.provides.build: src/CMakeFiles/eComics.dir/comic_manager.c.o

src/CMakeFiles/eComics.dir/comic_selection.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/comic_selection.c.o: src/comic_selection.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/comic_selection.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/comic_selection.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/comic_selection.c

src/CMakeFiles/eComics.dir/comic_selection.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/comic_selection.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/comic_selection.c > CMakeFiles/eComics.dir/comic_selection.c.i

src/CMakeFiles/eComics.dir/comic_selection.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/comic_selection.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/comic_selection.c -o CMakeFiles/eComics.dir/comic_selection.c.s

src/CMakeFiles/eComics.dir/comic_selection.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/comic_selection.c.o.requires

src/CMakeFiles/eComics.dir/comic_selection.c.o.provides: src/CMakeFiles/eComics.dir/comic_selection.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/comic_selection.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/comic_selection.c.o.provides

src/CMakeFiles/eComics.dir/comic_selection.c.o.provides.build: src/CMakeFiles/eComics.dir/comic_selection.c.o

src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o: src/connectors/ftf-comics.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/connectors/ftf-comics.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/connectors/ftf-comics.c

src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/connectors/ftf-comics.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/connectors/ftf-comics.c > CMakeFiles/eComics.dir/connectors/ftf-comics.c.i

src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/connectors/ftf-comics.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/connectors/ftf-comics.c -o CMakeFiles/eComics.dir/connectors/ftf-comics.c.s

src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.requires

src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.provides: src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.provides

src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.provides.build: src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o

src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o: src/connectors/xkcd-comics.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/connectors/xkcd-comics.c

src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/connectors/xkcd-comics.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/connectors/xkcd-comics.c > CMakeFiles/eComics.dir/connectors/xkcd-comics.c.i

src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/connectors/xkcd-comics.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/connectors/xkcd-comics.c -o CMakeFiles/eComics.dir/connectors/xkcd-comics.c.s

src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.requires

src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.provides: src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.provides

src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.provides.build: src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o

src/CMakeFiles/eComics.dir/widgets/comic_view.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/widgets/comic_view.c.o: src/widgets/comic_view.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/widgets/comic_view.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/widgets/comic_view.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/widgets/comic_view.c

src/CMakeFiles/eComics.dir/widgets/comic_view.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/widgets/comic_view.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/widgets/comic_view.c > CMakeFiles/eComics.dir/widgets/comic_view.c.i

src/CMakeFiles/eComics.dir/widgets/comic_view.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/widgets/comic_view.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/widgets/comic_view.c -o CMakeFiles/eComics.dir/widgets/comic_view.c.s

src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.requires

src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.provides: src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.provides

src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.provides.build: src/CMakeFiles/eComics.dir/widgets/comic_view.c.o

src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o: src/widgets/GraniteWidgetDialog.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/widgets/GraniteWidgetDialog.c

src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/widgets/GraniteWidgetDialog.c > CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.i

src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/widgets/GraniteWidgetDialog.c -o CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.s

src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.requires

src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.provides: src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.provides

src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.provides.build: src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o

src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o: src/widgets/ToolModeButton.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/widgets/ToolModeButton.c

src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/widgets/ToolModeButton.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/widgets/ToolModeButton.c > CMakeFiles/eComics.dir/widgets/ToolModeButton.c.i

src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/widgets/ToolModeButton.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/widgets/ToolModeButton.c -o CMakeFiles/eComics.dir/widgets/ToolModeButton.c.s

src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.requires

src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.provides: src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.provides

src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.provides.build: src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o

src/CMakeFiles/eComics.dir/widgets/RowButton.c.o: src/CMakeFiles/eComics.dir/flags.make
src/CMakeFiles/eComics.dir/widgets/RowButton.c.o: src/widgets/RowButton.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/eComics.dir/widgets/RowButton.c.o"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/eComics.dir/widgets/RowButton.c.o   -c /home/digi/Dropbox/Projects/eComics/build/src/widgets/RowButton.c

src/CMakeFiles/eComics.dir/widgets/RowButton.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/eComics.dir/widgets/RowButton.c.i"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/digi/Dropbox/Projects/eComics/build/src/widgets/RowButton.c > CMakeFiles/eComics.dir/widgets/RowButton.c.i

src/CMakeFiles/eComics.dir/widgets/RowButton.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/eComics.dir/widgets/RowButton.c.s"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/digi/Dropbox/Projects/eComics/build/src/widgets/RowButton.c -o CMakeFiles/eComics.dir/widgets/RowButton.c.s

src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.requires:
.PHONY : src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.requires

src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.provides: src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.requires
	$(MAKE) -f src/CMakeFiles/eComics.dir/build.make src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.provides.build
.PHONY : src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.provides

src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.provides.build: src/CMakeFiles/eComics.dir/widgets/RowButton.c.o

src/main.c: ../src/main.vala
src/main.c: ../src/comic_connector.vala
src/main.c: ../src/comic_manager.vala
src/main.c: ../src/comic_selection.vala
src/main.c: ../src/connectors/ftf-comics.vala
src/main.c: ../src/connectors/xkcd-comics.vala
src/main.c: ../src/widgets/comic_view.vala
src/main.c: ../src/widgets/GraniteWidgetDialog.vala
src/main.c: ../src/widgets/ToolModeButton.vala
src/main.c: ../src/widgets/RowButton.vala
	$(CMAKE_COMMAND) -E cmake_progress_report /home/digi/Dropbox/Projects/eComics/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating main.c, comic_connector.c, comic_manager.c, comic_selection.c, connectors/ftf-comics.c, connectors/xkcd-comics.c, widgets/comic_view.c, widgets/GraniteWidgetDialog.c, widgets/ToolModeButton.c, widgets/RowButton.c"
	cd /home/digi/Dropbox/Projects/eComics/build/src && /usr/bin/valac -C -b /home/digi/Dropbox/Projects/eComics/src -d /home/digi/Dropbox/Projects/eComics/build/src --pkg=gtk+-3.0 --pkg=granite --thread /home/digi/Dropbox/Projects/eComics/src/main.vala /home/digi/Dropbox/Projects/eComics/src/comic_connector.vala /home/digi/Dropbox/Projects/eComics/src/comic_manager.vala /home/digi/Dropbox/Projects/eComics/src/comic_selection.vala /home/digi/Dropbox/Projects/eComics/src/connectors/ftf-comics.vala /home/digi/Dropbox/Projects/eComics/src/connectors/xkcd-comics.vala /home/digi/Dropbox/Projects/eComics/src/widgets/comic_view.vala /home/digi/Dropbox/Projects/eComics/src/widgets/GraniteWidgetDialog.vala /home/digi/Dropbox/Projects/eComics/src/widgets/ToolModeButton.vala /home/digi/Dropbox/Projects/eComics/src/widgets/RowButton.vala

src/comic_connector.c: src/main.c

src/comic_manager.c: src/main.c

src/comic_selection.c: src/main.c

src/connectors/ftf-comics.c: src/main.c

src/connectors/xkcd-comics.c: src/main.c

src/widgets/comic_view.c: src/main.c

src/widgets/GraniteWidgetDialog.c: src/main.c

src/widgets/ToolModeButton.c: src/main.c

src/widgets/RowButton.c: src/main.c

# Object files for target eComics
eComics_OBJECTS = \
"CMakeFiles/eComics.dir/main.c.o" \
"CMakeFiles/eComics.dir/comic_connector.c.o" \
"CMakeFiles/eComics.dir/comic_manager.c.o" \
"CMakeFiles/eComics.dir/comic_selection.c.o" \
"CMakeFiles/eComics.dir/connectors/ftf-comics.c.o" \
"CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o" \
"CMakeFiles/eComics.dir/widgets/comic_view.c.o" \
"CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o" \
"CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o" \
"CMakeFiles/eComics.dir/widgets/RowButton.c.o"

# External object files for target eComics
eComics_EXTERNAL_OBJECTS =

src/eComics: src/CMakeFiles/eComics.dir/main.c.o
src/eComics: src/CMakeFiles/eComics.dir/comic_connector.c.o
src/eComics: src/CMakeFiles/eComics.dir/comic_manager.c.o
src/eComics: src/CMakeFiles/eComics.dir/comic_selection.c.o
src/eComics: src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o
src/eComics: src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o
src/eComics: src/CMakeFiles/eComics.dir/widgets/comic_view.c.o
src/eComics: src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o
src/eComics: src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o
src/eComics: src/CMakeFiles/eComics.dir/widgets/RowButton.c.o
src/eComics: src/CMakeFiles/eComics.dir/build.make
src/eComics: src/CMakeFiles/eComics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable eComics"
	cd /home/digi/Dropbox/Projects/eComics/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eComics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/eComics.dir/build: src/eComics
.PHONY : src/CMakeFiles/eComics.dir/build

src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/main.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/comic_connector.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/comic_manager.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/comic_selection.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/connectors/ftf-comics.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/connectors/xkcd-comics.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/widgets/comic_view.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/widgets/GraniteWidgetDialog.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/widgets/ToolModeButton.c.o.requires
src/CMakeFiles/eComics.dir/requires: src/CMakeFiles/eComics.dir/widgets/RowButton.c.o.requires
.PHONY : src/CMakeFiles/eComics.dir/requires

src/CMakeFiles/eComics.dir/clean:
	cd /home/digi/Dropbox/Projects/eComics/build/src && $(CMAKE_COMMAND) -P CMakeFiles/eComics.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/eComics.dir/clean

src/CMakeFiles/eComics.dir/depend: src/main.c
src/CMakeFiles/eComics.dir/depend: src/comic_connector.c
src/CMakeFiles/eComics.dir/depend: src/comic_manager.c
src/CMakeFiles/eComics.dir/depend: src/comic_selection.c
src/CMakeFiles/eComics.dir/depend: src/connectors/ftf-comics.c
src/CMakeFiles/eComics.dir/depend: src/connectors/xkcd-comics.c
src/CMakeFiles/eComics.dir/depend: src/widgets/comic_view.c
src/CMakeFiles/eComics.dir/depend: src/widgets/GraniteWidgetDialog.c
src/CMakeFiles/eComics.dir/depend: src/widgets/ToolModeButton.c
src/CMakeFiles/eComics.dir/depend: src/widgets/RowButton.c
	cd /home/digi/Dropbox/Projects/eComics/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/digi/Dropbox/Projects/eComics /home/digi/Dropbox/Projects/eComics/src /home/digi/Dropbox/Projects/eComics/build /home/digi/Dropbox/Projects/eComics/build/src /home/digi/Dropbox/Projects/eComics/build/src/CMakeFiles/eComics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/eComics.dir/depend
