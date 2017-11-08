#pragma once

#ifdef _DEBUG
#pragma comment(lib, "libprotobuf_d.lib")
#pragma comment(lib, "libprotoc_d.lib")
#pragma comment(lib, "libprotobuf-lite_d.lib")
#else
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "libprotoc.lib")
#pragma comment(lib, "libprotobuf-lite.lib")
#endif