# Copyright (c) 2021 Trail of Bits, Inc., all rights reserved.

if(PASTA_BOOTSTRAP_MACROS OR PASTA_BOOTSTRAP_TYPES)
    if(PASTA_BOOTSTRAP_MACROS)
        add_subdirectory(BootstrapMacros)
    endif()
    
    if(PASTA_BOOTSTRAP_TYPES)
        add_subdirectory(BootstrapTypes)
    endif()
else()
    add_subdirectory(PrintMainSourceFile)
    add_subdirectory(PrintAlignedSubstitutions)
    add_subdirectory(PrintAST)
    add_subdirectory(PrintMacroGraph)
    add_subdirectory(PrintTokenGraph)
endif()
