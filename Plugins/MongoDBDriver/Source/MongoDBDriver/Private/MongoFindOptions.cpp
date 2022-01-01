#include "MongoFindOptions.h"

FMongoFindOptions::FMongoFindOptions() {
    this->bAllowPartialResults = false;
    this->BatchSize = 0;
    this->Limit = 0;
    this->MaxAwaitTime = 0;
    this->MaxTime = 0;
    this->bNoCursorTimeout = false;
    this->bReturnKey = false;
    this->bShowRecordId = false;
    this->Skip = 0;
}

