#ifndef GAMBATTE_PAKINFO_H
#define GAMBATTE_PAKINFO_H

#include <string>

namespace gambatte {

class PakInfo {
public:
	PakInfo();
	PakInfo(bool multipak, unsigned rombanks, unsigned crc, unsigned char const romheader[]);
	bool headerChecksumOk() const;
	std::string const mbc() const;
	unsigned rambanks() const;
	unsigned rombanks() const;
	unsigned crc() const;

private:
	unsigned short flags_;
	unsigned short rombanks_;
	unsigned char  h144x_[16];
	unsigned crc_;
};

}

#endif
