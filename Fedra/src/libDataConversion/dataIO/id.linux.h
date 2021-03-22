#ifndef _SYSAL_IDENTIFIERS_
#define _SYSAL_IDENTIFIERS_

//#pragma pack(push)
//#pragma pack(1)

typedef struct
{
	int Part[4];
  	} Identifier;

typedef struct 
{
	unsigned char InfoType;
	short HeaderFormat;
	} IO_Header;

typedef struct
{
	IO_Header Hdr;
	Identifier Id;
	} IO_HeaderId;

//#pragma pack(pop)

#endif
