// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� BLSH_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// BLSH_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef BLSH_EXPORTS
#define BLSH_API __declspec(dllexport)
#else
#define BLSH_API __declspec(dllimport)
#endif

// �����Ǵ� BLSH.dll ������
class BLSH_API CBLSH {
public:
	CBLSH(void);
	// TODO:  �ڴ�������ķ�����
};

extern BLSH_API int nBLSH;

extern "C" BLSH_API int fnBLSH(void);
