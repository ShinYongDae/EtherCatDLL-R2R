// EtherCatDLL.h : EtherCatDLL DLL�� �⺻ ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CEtherCatDLLApp
// �� Ŭ������ ������ ������ EtherCatDLL.cpp�� �����Ͻʽÿ�.
//

class CEtherCatDLLApp : public CWinApp
{
public:
	CEtherCatDLLApp();

// �������Դϴ�.
public:
	BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
