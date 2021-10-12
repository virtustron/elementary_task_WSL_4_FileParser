#pragma once

#include <string>
#include "ParseType.hpp"
#include "TextFile.hpp"

class TextFileParser
{
public:
    TextFileParser(TextFile& text_file);
    ~TextFileParser();

    int Parse(const ParseType parse_type, const std::string& search, const std::string& replace = "");

private:
    /* data */
    TextFile& m_text_file;

    int CountSubstringOccurences(const TextFile& text_file);
    int ReplaceSubstringOccurences(const TextFile& text_file);
};



