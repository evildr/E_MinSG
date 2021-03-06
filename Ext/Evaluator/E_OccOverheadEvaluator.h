/*
	This file is part of the E_MinSG library.
	Copyright (C) 2007-2012 Benjamin Eikel <benjamin@eikel.org>
	Copyright (C) 2007-2012 Claudius Jähn <claudius@uni-paderborn.de>
	Copyright (C) 2007-2012 Ralf Petring <ralf@petring.net>
	
	This library is subject to the terms of the Mozilla Public License, v. 2.0.
	You should have received a copy of the MPL along with this library; see the 
	file LICENSE. If not, you can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifdef MINSG_EXT_EVALUATORS

#ifndef __E_OccOverheadEvaluator_H
#define __E_OccOverheadEvaluator_H

#include "E_Evaluator.h"
#include <MinSG/Ext/Evaluator/Evaluator.h>

namespace MinSG{
namespace Evaluators{
class OccOverheadEvaluator;
}
}
namespace E_MinSG {

/***
 **   E_OccOverheadEvaluator ---|> E_Evaluator ---|> Object
 **/
class E_OccOverheadEvaluator : public E_Evaluator{
		ES_PROVIDES_TYPE_NAME(OccOverheadEvaluator)
	public:
		static EScript::Type* typeObject;
		static void init(EScript::Namespace & lib);

		E_OccOverheadEvaluator(MinSG::Evaluators::Evaluator::DirectionMode mode);
		virtual ~E_OccOverheadEvaluator();

};

}
#endif // __E_OccOverheadEvaluator_H

#endif /* MINSG_EXT_EVALUATORS */
