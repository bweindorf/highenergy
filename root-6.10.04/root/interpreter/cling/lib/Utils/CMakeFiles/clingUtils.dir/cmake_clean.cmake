file(REMOVE_RECURSE
  "../../../llvm/src/lib/libclingUtils.pdb"
  "../../../llvm/src/lib/libclingUtils.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clingUtils.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
