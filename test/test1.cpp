#include <gtest/gtest.h>
#include "otvetb.h"

TEST(test_default, basic_test_set) {
    ASSERT_TRUE(otvet("hello world") == "hll wrld");
}
TEST(test_only_vowels, basic_test_set) {
    ASSERT_TRUE(otvet("aeiouAEIOU") == "");
}
TEST(test_only_consonants, basic_test_set) {
    ASSERT_TRUE(otvet("bcdfghjklmnpqrstvwxyz") == "bcdfghjklmnpqrstvwxyz");
}
TEST(test_mixed_case, basic_test_set) {
    ASSERT_TRUE(otvet("Hello World") == "Hll Wrld");
}
TEST(test_with_numbers, basic_test_set) {
    ASSERT_TRUE(otvet("a1e2i3o4u5") == "12345");
}
TEST(test_empty_string, basic_test_set) {
    ASSERT_TRUE(otvet("") == "");
}
TEST(test_special_chars, basic_test_set) {
    ASSERT_TRUE(otvet("!@#$%") == "!@#$%");
}
TEST(test_long_string, basic_test_set) {
    ASSERT_TRUE(otvet("The quick brown fox jumps over the lazy dog") == "Th qck brwn fx jmps vr th lzy dg");
}
TEST(test_no_vowels, basic_test_set) {
    ASSERT_TRUE(otvet("123!@#bcdfg") == "123!@#bcdfg");
}
TEST(test_single_vowel, basic_test_set) {
    ASSERT_TRUE(otvet("a") == "");
}
TEST(test_single_consonant, basic_test_set) {
    ASSERT_TRUE(otvet("b") == "b");
}
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
