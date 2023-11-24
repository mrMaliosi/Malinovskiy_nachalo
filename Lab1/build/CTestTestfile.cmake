# CMake generated Testfile for 
# Source directory: C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/Lab1
# Build directory: C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/Lab1/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(TestCircularBuffer "Tests")
set_tests_properties(TestCircularBuffer PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/Lab1/CMakeLists.txt;24;add_test;C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/Lab1/CMakeLists.txt;0;")
subdirs("src/Tests")
subdirs("src/CircularBuffer")
subdirs("googletest")
