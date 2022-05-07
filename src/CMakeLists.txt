add_library(WordWriterLib STATIC WordWriter.cpp)
target_include_directories(WordWriterLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(WordWriter main.cpp)
target_link_libraries(WordWriter PRIVATE WordWriterLib)
