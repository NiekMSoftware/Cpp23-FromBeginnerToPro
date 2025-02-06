# Create executables for each source file in this chapter
file(GLOB SOURCES *.cpp)
foreach(source_file ${SOURCES})
    # Get the file name without extension
    get_filename_component(executable_name ${source_file} NAME_WE)
    # Create an executable for each source file
    add_executable(${executable_name} ${source_file})
    # Add precompiled headers
    target_precompile_headers(${executable_name} PRIVATE ${CMAKE_SOURCE_DIR}/inc/pch.h)
endforeach()