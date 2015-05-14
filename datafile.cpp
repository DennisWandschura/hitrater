#include "datafile.h"

CDataFile::CDataFile(const char *filename)
:m_filename(filename)
{
	// create our file
	m_outFile.open(m_filename);
	if (!m_outFile.is_open())
		throw std::exception("Could not open file");
}

CDataFile::~CDataFile()
{
}

void CDataFile::textout (const char *text)
{
	m_outFile << text;

}

void CDataFile::fTextout (const char *text, ...)
{
#define MAX_BUFFER 1024
	char buffer[MAX_BUFFER];	// char-Buffer
	va_list pArgList;			// Liste der Eergebenen Argumente

	// String aus den Argumenten erstellen
	va_start (pArgList, text);
	vsprintf_s  (buffer, text, pArgList);
	va_end (pArgList);

	m_outFile << buffer;
}