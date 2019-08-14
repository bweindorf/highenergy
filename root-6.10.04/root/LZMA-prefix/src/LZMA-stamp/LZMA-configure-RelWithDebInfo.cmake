

set(command "/home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA/configure;--prefix;/home/brandon/Projects/root-6.10.04/root;--libdir;/home/brandon/Projects/root-6.10.04/root/lib;--with-pic;--disable-shared;--quiet;CC=/usr/bin/cc;CXX=/usr/bin/c++;CFLAGS=;LDFLAGS=")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-configure-out.log"
  ERROR_FILE "/home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-configure-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "LZMA configure command succeeded.  See also /home/brandon/Projects/root-6.10.04/root/LZMA-prefix/src/LZMA-stamp/LZMA-configure-*.log")
  message(STATUS "${msg}")
endif()
