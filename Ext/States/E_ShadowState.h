/*
	This file is part of the E_MinSG library.
	Copyright (C) 2007-2012 Benjamin Eikel <benjamin@eikel.org>
	Copyright (C) 2007-2012 Claudius Jähn <claudius@uni-paderborn.de>
	Copyright (C) 2007-2012 Ralf Petring <ralf@petring.net>
	
	This library is subject to the terms of the Mozilla Public License, v. 2.0.
	You should have received a copy of the MPL along with this library; see the 
	file LICENSE. If not, you can obtain one at http://mozilla.org/MPL/2.0/.
*/
#ifndef E_SHADOWSTATE_H_
#define E_SHADOWSTATE_H_

#include "../../Core/States/E_State.h"
#include <MinSG/Ext/States/ShadowState.h>
#include <MinSG/Core/States/State.h>
#include <Util/References.h>

namespace EScript {
class Namespace;
class Type;
}
namespace E_MinSG {

//! [E_ShadowState] ---|> [E_State]
class E_ShadowState : public E_State {
	ES_PROVIDES_TYPE_NAME(ShadowState)
	public:
		template<class, class, class> friend class Util::PolymorphicWrapperCreator;

		static EScript::Type * getTypeObject();
		static void init(EScript::Namespace & lib);

		virtual ~E_ShadowState() {
		}

		const MinSG::ShadowState * operator*()const		{	return static_cast<const MinSG::ShadowState*>(ref().get());	}
		MinSG::ShadowState * operator*()				{	return static_cast<MinSG::ShadowState*>(ref().get());	}

	protected:
		E_ShadowState(MinSG::ShadowState * s, EScript::Type * type=nullptr)  : E_State(s, type ? type : getTypeObject()) {
		}
};

}

ES_CONV_EOBJ_TO_OBJ(E_MinSG::E_ShadowState, MinSG::ShadowState *, **eObj)

#endif /* E_SHADOWSTATE_H_ */
