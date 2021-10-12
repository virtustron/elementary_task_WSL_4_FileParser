#pragma once

#include <string>
#include "ParseType.hpp"
#include "TextFile.hpp"

class TextFileParser
{
public:
    TextFileParser(TextFile& text_file);
    ~TextFileParser();

    int ParseFile(const TextFile& text_file,  const ParseType parse_type);

private:
    TextFile& m_text_file;

    int CountSubstringOccurences(const TextFile& text_file);
    int CountSubstringOccurences(const TextFileChunk& text_file_chunk);
    int ReplaceSubstringOccurences(const TextFile& text_file);
    int ReplaceSubstringOccurences(TextFileChunk& text_file_chunk);
};



