file(REMOVE_RECURSE
  "../../../llvm/src/lib/libclingInterpreter.pdb"
  "../../../llvm/src/lib/libclingInterpreter.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clingInterpreter.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
