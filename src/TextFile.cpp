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

void TextFile::ReadContent()
{
	// TODO read file by chunks
	
	m_file_stream.rdbuf(m_file_content, )
}

void TextFile::WriteContent()
{

}

std::string TextFile::get_content()
{

}

void TextFile::set_content(std::string file_content)
{

}

