file(REMOVE_RECURSE
  "../../../llvm/src/lib/libclingMetaProcessor.pdb"
  "../../../llvm/src/lib/libclingMetaProcessor.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clingMetaProcessor.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
