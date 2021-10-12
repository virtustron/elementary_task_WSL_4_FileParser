#include "TextFileParser.hpp"

TextFileParser::TextFileParser(TextFile& text_file) : m_text_file {text_file}
{

}

TextFileParser::~TextFileParser()
{
}

int TextFileParser::ParseFile(const TextFile& text_file,  const ParseType parse_type)
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

int TextFileParser::CountSubstringOccurences(const TextFile& text_file)
{
    int total_occurences_number = 0;

    while (!text_file.IsEndOfFile())
    {
        TextFileChunk chunk;
        chunk = text_file.ReadNextChunk();
        total_occurences_number += CountSubstringOccurences(chunk);
    }
    
    return total_occurences_number;
}

int TextFileParser::CountSubstringOccurences(const TextFileChunk& text_file_chunk)
{
    
    return 0;
}



int TextFileParser::ReplaceSubstringOccurences(const TextFile& text_file)
{
    int total_occurences_number = 0;
    
    while (!text_file.IsEndOfFile())
    {
        TextFileChunk chunk;
        chunk = text_file.ReadNextChunk();
        total_occurences_number += ReplaceSubstringOccurences(chunk);
        text_file.InsertChunk(chunk);

    }
    
    return total_occurences_number;
}

int TextFileParser::ReplaceSubstringOccurences(TextFileChunk& text_file_chunk)
{

}




