// Copyright 2017 Daniel Parker
// Distributed under Boost license

#ifdef __linux__
#define BOOST_TEST_DYN_LINK
#endif

#include <boost/test/unit_test.hpp>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <ctime>
#include <jsoncons/json.hpp>
#include <jsoncons_ext/cppjson/cpp_decoder.hpp>
#include <jsoncons/json_reader.hpp>

using namespace jsoncons;

BOOST_AUTO_TEST_SUITE(cpp_decoder_tests)

BOOST_AUTO_TEST_CASE(test_decoder_test)
{
    std::string s = R"(
        [ "all", "cows", "eat", "grass" ] 
    )";
    std::istringstream is(s);

    cppjson::cpp_decoder<std::vector<std::string>> decoder;
    try
    {
        json_reader reader(is, decoder);
        reader.read_next();
    }
    catch (const std::exception&)
    {
    }
    BOOST_CHECK(decoder.is_valid());
}

BOOST_AUTO_TEST_SUITE_END()



