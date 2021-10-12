#include "TextFileParser.hpp"

TextFileParser::TextFileParser(TextFile& text_file) : m_text_file {text_file}
{

}

TextFileParser::~TextFileParser()
{
}

int ParseFile(const TextFile& text_file,  const ParseType parse_type)
{
    int occurences_count = 0;
    
    switch (parse_type)
    {
        case COUNT_OCCURENCES:
            occurences_count = CountSubstringOccurences(text_file);
            break;

        case REPLACE_OCCURENCES:
            occurences_count = ReplaceSubstringOccurences(text_file);
            break;

        default:
            occurences_count = -1;
    }
    
    return occurences_count;
}

int CountSubstringOccurences(const TextFile& text_file)
{
    
    
    return 0;
}


int ReplaceSubstringOccurences(const TextFile& text_file)
{
    return 0;
}

int ParseChunk(const ParseType parse_type, const std::string& search, const std::string& replace = "")
{
    return 0;
}


