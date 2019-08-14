

set(command "/usr/bin/cmake;-Dmake=${make};-Dconfig=${config};-P;/home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-download-RelWithDebInfo-impl.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-download-out.log"
  ERROR_FILE "/home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-download-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "LZMA download command succeeded.  See also /home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-download-*.log")
  message(STATUS "${msg}")
endif()
