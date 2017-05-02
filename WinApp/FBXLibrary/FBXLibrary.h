#pragma once
// FBXLibrary.h : Contains declaration of FBX class

#ifdef FBXLIBRARY_EXPORTS  
#define FBXLIBRARY_API __declspec(dllexport)   
#else  
#define FBXLIBRARY_API __declspec(dllimport)   
#endif  

#include "stdafx.h"

namespace FBXLibrary {
	//This class is export by FBXLibrary.dll
	class TestFunctions {
	public:
		static FBXLIBRARY_API double Add(double a, double b);
	};

	class FBXLIBRARY_API FBXInterface {
	private:
		
		const char* lFilename;		//File name to import
		
		int numTabs = 0;		/* Tab character ("\t") counter */
	public:
		FBXInterface();
		~FBXInterface();
		int InitializeImporter(const char* filename);
		void CreateScene();
		void PrintTabs();
		void PrintAttribute(FbxNodeAttribute* pAttribute);
		void PrintNode(FbxNode* pNode);
		void Print();
	};
}