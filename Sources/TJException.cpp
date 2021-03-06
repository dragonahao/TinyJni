#include "../TJPch.h"
#include "../Include/TJCommon.h"
#include "../Include/TJException.h"
#include "../Include/TJJavaException.h"

TJNIException::TJNIException(TJInt code, const std::string& explanation) throw() :
	TJBaseException(""),
	mCode(code),
	mDescription(explanation)
{
}
	
TJNIException::TJNIException(const TJNIException& exc) throw() :
	TJBaseException(exc),
	mCode(exc.mCode),
	mDescription(exc.mDescription)
{
}

TJNIException& TJNIException::operator=(const TJNIException& exc) throw()
{
	if (this != &exc)
	{
		mCode = exc.mCode;
		mDescription = exc.mDescription;
	}
	return *this;
}


TJNIException::~TJNIException() throw()
{
}
