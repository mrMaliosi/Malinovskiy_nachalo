# CMake generated Testfile for 
# Source directory: C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/lab2_game_of_life
# Build directory: C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/lab2_game_of_life/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(TestBitset "Tests")
set_tests_properties(TestBitset PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/lab2_game_of_life/CMakeLists.txt;23;add_test;C:/Users/Владимир/Desktop/Универ/2 курс/ООП/Malinovskiy_nachalo/lab2_game_of_life/CMakeLists.txt;0;")
subdirs("Tests")
subdirs("game_of_life")
subdirs("googletest")
