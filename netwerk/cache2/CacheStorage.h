/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef CacheStorage__h__
#define CacheStorage__h__

#include "nsICacheStorage.h"
#include "CacheEntry.h"
#include "LoadContextInfo.h"

#include "nsRefPtrHashtable.h"
#include "nsThreadUtils.h"
#include "nsCOMPtr.h"
#include "nsILoadContextInfo.h"
#include "nsIApplicationCache.h"
#include "nsICacheEntryDoomCallback.h"

class nsIURI;
class nsIApplicationCache;

namespace mozilla {
namespace net {

// This dance is needed to make CacheEntryTable declarable-only in headers
// w/o exporting CacheEntry.h file to make nsNetModule.cpp compilable.
typedef nsRefPtrHashtable<nsCStringHashKey, CacheEntry> TCacheEntryTable;
class CacheEntryTable : public TCacheEntryTable
{
public:
  enum EType
  {
    MEMORY_ONLY,
    ALL_ENTRIES
  };

  CacheEntryTable(EType aType) : mType(aType) { }
  EType Type() const
  {
    return mType;
  }
private:
  EType const mType;
  CacheEntryTable() MOZ_DELETE;
};

class CacheStorage : public nsICacheStorage
{
  NS_DECL_THREADSAFE_ISUPPORTS
  NS_DECL_NSICACHESTORAGE

public:
  CacheStorage(nsILoadContextInfo* aInfo,
               bool aAllowDisk,
               bool aLookupAppCache);

protected:
  virtual ~CacheStorage();

  nsresult ChooseApplicationCache(nsIURI* aURI, nsIApplicationCache** aCache);

  nsRefPtr<LoadContextInfo> mLoadContextInfo;
  bool mWriteToDisk : 1;
  bool mLookupAppCache : 1;

public:
  nsIApplicationCache* AppCache() const { return nullptr; }
  nsILoadContextInfo* LoadInfo() const { return mLoadContextInfo; }
  bool WriteToDisk() const { return mWriteToDisk && !mLoadContextInfo->IsPrivate(); }
  bool LookupAppCache() const { return mLookupAppCache; }
};

} // net
} // mozilla

#endif
