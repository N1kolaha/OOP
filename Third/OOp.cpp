#include <iostream>
#include <fstream>
#include <ctime>


int main() {

	std::ofstream os("image.bmp", std::ios_base::out | std::ios_base::binary);
	int n = 0x4d42;

	std::uint16_t a;
	os.write((char*)&n, sizeof(uint16_t));
	n = 78;
	os.write((char*)&n, sizeof(int));
	n = 0;
	os.write((char*)&n, sizeof(int));
	
	n = 54;
	os.write((char*)&n, sizeof(int));
	n = 40;
	os.write((char*)&n, sizeof(int));
	n = 4;
	os.write((char*)&n, sizeof(int));
	n = 2;
	os.write((char*)&n, sizeof(int));
	n = 1;
	os.write((char*)&n, sizeof(uint16_t));
	n = 24;
	os.write((char*)&n, sizeof(uint16_t));
	n = 0;
	os.write((char*)&n, sizeof(int));
	n = 24;
	os.write((char*)&n, sizeof(int));
	n = 2835;
	os.write((char*)&n, sizeof(int));
	n = 2835;
	os.write((char*)&n, sizeof(int));
	n = 0;
	os.write((char*)&n, sizeof(int));
	n = 0;
	os.write((char*)&n, sizeof(int));





	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	//n = 0;
	//os.write((char*)&n, sizeof(int));

	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	n = 128;
	os.write((char*)&n, sizeof(uint8_t));
	//n = 0;
	//os.write((char*)&n, sizeof(int));
	os.close();
	return 0;
}