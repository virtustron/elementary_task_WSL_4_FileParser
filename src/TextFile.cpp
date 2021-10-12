#include "TextFile.hpp"

TextFile::TextFile()
{
	m_file_name = "";
	m_file_content = "";
}

TextFile::TextFile(std::string file_name)
{
	// TODO: validate filename
	m_file_name = file_name;
	m_file_content = "";

	// TODO: validate succesful opening
	m_file_stream.open(m_file_name, std::ios_base::in | std::ios_base::out);
}

TextFile::~TextFile()
{
	if (m_file_stream.is_open())
		m_file_stream.close();
}

bool TextFile::IsEndOfFile() const
{
	return true;
}

TextFileChunk TextFile::ReadNextChunk(const int chunk_index, const int chunk_size) const
{
	// TODO read next chunk
	TextFileChunk chunk;
	/*
		int m_chunk_size;
		int m_chunk_index;
		int m_chunks_count;
	*/
	return chunk;
}

void TextFile::InsertChunk(const int chunk_index, const int chunk_size) const
{
	// TODO insert chunk
	// for REPLACE_OCCURENCES ParseType 
}






std::string TextFile::get_content()
{
	return m_file_content;
}

void TextFile::set_content(const std::string & file_content)
{
	// TODO add content validation
	if (file_content == "")
	{
		throw std::invalid_argument("File content to set is empty"); 
	}

}

