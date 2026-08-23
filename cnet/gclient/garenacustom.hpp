
#ifndef __GNET_GARENACUSTOM_HPP
#define __GNET_GARENACUSTOM_HPP

#include "rpcdefs.h"
#include "callid.hxx"
#include "state.hxx"


namespace GNET
{

class GArenaCustom : public GNET::Protocol
{
	#include "garenacustom"

	void Process(Manager *manager, Manager::Session::ID sid)
	{
		// TODO
	}
};

};

#endif
