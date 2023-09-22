add_test([=[FizzBuzz.testFizz]=]  /workspaces/fizzbuzz/build/mytests [==[--gtest_filter=FizzBuzz.testFizz]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[FizzBuzz.testFizz]=]  PROPERTIES WORKING_DIRECTORY /workspaces/fizzbuzz/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  mytests_TESTS FizzBuzz.testFizz)
