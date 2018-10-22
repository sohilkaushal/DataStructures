cmake_minimum_required(VERSION 3.12)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures main.cpp Vectors/customVector.cpp Vectors/customVector.h "Linked List/linkedList.cpp" "Linked List/linkedList.h" Stacks/Stack.cpp Stacks/Stack.h Queue/queue.cpp Queue/queue.h Trees/tree.cpp Trees/tree.h)