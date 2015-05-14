#pragma once

#include <string>
#include <stdarg.h>
#include <fstream>

class CDataFile
{
	std::ofstream m_outFile;
	const char *m_filename;

public:
	CDataFile(const char *filename);
	~CDataFile();

	void textout (const char *text);
	void fTextout (const char *text, ...);
};