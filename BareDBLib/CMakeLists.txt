add_library(BareDBLib src/Calc.cc)
 
message("BareDBLib current source dir = ${CMAKE_CURRENT_SOURCE_DIR}")
 
target_include_directories( BareDBLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)