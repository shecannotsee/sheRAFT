#include "time.hpp"

int main()
{
#ifndef 0//��ʱ���Ĳ���
	countdown server_clock;
p1:
	server_clock.clear();
	std::cout << "begin tag\n";
	server_clock.beginTag();
	server_clock.endTag();
	while (server_clock.getTimeDifference() < 1000) {//��������1��
		server_clock.endTag();
	}
	std::cout << server_clock.getRandomTime() << "\n";

	//std::cout << server_clock.getTimeDifference() << "\n";

	goto p1;
#endif // !0
	


	return 0;
}

