FILE(REMOVE_RECURSE
  "CMakeFiles/hello_world.dir/src/hello_world.cpp.o"
  "hello_world.pdb"
  "hello_world"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/hello_world.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
