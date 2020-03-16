/*****************************************************************************
   Copyright 2004 Steve M�nard

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

 *****************************************************************************/
#ifndef _JPNUMBERTYPE_H_
#define _JPNUMBERTYPE_H_

/**
 * Wrapper for Class<java.lang.Number>
 */
class JPNumberType : public JPClass
{
public:
	JPNumberType(JPJavaFrame& frame, jclass clss,
			const string& name,
			JPClass* super,
			JPClassList& interfaces,
			jint modifiers);

	virtual~ JPNumberType();

	JPMatch::Type getJavaConversion(JPJavaFrame* frame, JPMatch& match, PyObject* pyobj) override;
} ;

#endif // _JPNUMBERTYPE_H_