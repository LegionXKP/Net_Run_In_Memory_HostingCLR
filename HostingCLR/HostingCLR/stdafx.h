// stdafx.h: include file for the standard system include files,
// or include files specific to projects that are used frequently,
// and are rarely changed

// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������,
// ��� �������� �����, ����������� � ����� ������������ ��������,
// � ����� ��������

#pragma once
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>

// TODO: here refer to the additional headers needed by the program
// TODO: ����� ��������� � �������������� ����������, ����������� ���������
#include <metahost.h>
#pragma comment(lib, "MSCorEE.lib")

#import "C:\Windows\Microsoft.NET\Framework\v2.0.50727\mscorlib.tlb" raw_interfaces_only \
    high_property_prefixes("_get","_put","_putref")		\
    rename("ReportEvent", "InteropServices_ReportEvent")
using namespace mscorlib;