#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

class TextFile
{
public:
	TextFile();
	TextFile(std::string file_name);
	~TextFile();
	void ReadContent();
	void WriteContent();
	std::string get_content();
	void set_content(std::string file_content);
private:
	std::string m_file_content;
	std::string m_file_name;
	std::fstream m_file_stream;
};

