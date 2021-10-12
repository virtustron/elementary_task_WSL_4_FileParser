#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

#include "TextFileChunk.hpp"

class TextFile
{
public:
	TextFile();
	TextFile(std::string file_name);
	~TextFile();

	bool IsEndOfFile() const;
	// iterator (in the future)
	TextFileChunk ReadNextChunk(const int chunk_index, const int chunk_size) const;
	void InsertChunk(const int chunk_index, const int chunk_size) const;

	std::string get_content();
	void set_content(const std::string & file_content);
private:
	std::string m_file_content;
	std::string m_file_name;
	std::fstream m_file_stream;

	int m_chunk_size;
	int m_chunk_index;
	int m_chunks_count;
};

