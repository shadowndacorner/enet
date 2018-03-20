extern "C"
{
	#include "callbacks.c"
	#include "compress.c"
	#include "host.c"
	#include "list.c"
	#include "packet.c"
	#include "peer.c"
	#include "protocol.c"
#ifdef _WIN32
	#include "win32.c"
#else
	#include "unix.c"
#endif
}