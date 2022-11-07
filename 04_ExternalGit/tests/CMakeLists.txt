if (ENABLE_TESTING)
    set(TEST_MAIN "unit_tests")
    set(TEST_SOURCE Main.cc)


    add_executable(${TEST_MAIN} ${TEST_SOURCE})
    target_link_libraries(
        ${TEST_MAIN} PUBLIC
        ${LIBRARY_NAME}
        
    )

endif()