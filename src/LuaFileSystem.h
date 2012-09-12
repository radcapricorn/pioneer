// Copyright © 2008-2012 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See COPYING.txt for details

#ifndef _LUAFILESYSTEM_H
#define _LUAFILESYSTEM_H

namespace LuaFileSystem {
	void Register();

	enum Root { // <enum scope='LuaFileSystem' name=FileSystemRoot prefix=ROOT_>
		ROOT_USER,
		ROOT_DATA
	};
}

#endif
