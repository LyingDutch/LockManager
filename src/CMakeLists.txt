cmake_minimum_required(VERSION 3.0)
project ( server )

add_executable(server 
		main.cpp
		lock.cpp
		DDserver.cpp
		)
target_link_libraries(server OpenSSL::SSL)
target_link_libraries(server ${Boost_LIBRARIES})
target_link_libraries(server ${CMAKE_THREAD_LIBS_INIT})


