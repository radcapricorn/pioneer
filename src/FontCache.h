// Copyright © 2008-2012 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See COPYING.txt for details

#ifndef _FONTCACHE_H
#define _FONTCACHE_H

#include <map>
#include <string>
#include "RefCounted.h"
#include "text/TextureFont.h"
#include "text/VectorFont.h"

class FontCache {
public:
	FontCache() {}

	RefCountedPtr<Text::TextureFont> GetTextureFont(const std::string &name);
	RefCountedPtr<Text::VectorFont> GetVectorFont(const std::string &name);

private:
	FontCache(const FontCache &);
	FontCache &operator=(const FontCache &);

	std::map< std::string,RefCountedPtr<Text::TextureFont> > m_textureFonts;
	std::map< std::string,RefCountedPtr<Text::VectorFont> > m_vectorFonts;
};

#endif

