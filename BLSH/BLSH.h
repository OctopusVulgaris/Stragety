// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 BLSH_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// BLSH_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef BLSH_EXPORTS
#define BLSH_API __declspec(dllexport)
#else
#define BLSH_API __declspec(dllimport)
#endif

// 此类是从 BLSH.dll 导出的
class BLSH_API CBLSH {
public:
	CBLSH(void);
	// TODO:  在此添加您的方法。
};

extern BLSH_API int nBLSH;

extern "C" BLSH_API int fnBLSH(void);
