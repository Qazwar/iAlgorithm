#pragma once

#include <windows.h>

class _declspec(dllexport) CBASE64
{
public:
	CBASE64(VOID);
	~CBASE64(VOID);

public:
	bool Base64Encode(unsigned char* pBufferIn, int BufferInSize, unsigned char* pBufferOut, int &BufferOutSize);
	bool Base64Decode(unsigned char* pBufferIn, int BufferInSize, unsigned char* pBufferOut, int &BufferOutSize);

private:
	static const unsigned char Base64Table[64];
	unsigned char ReverseBase64Table[256];
};