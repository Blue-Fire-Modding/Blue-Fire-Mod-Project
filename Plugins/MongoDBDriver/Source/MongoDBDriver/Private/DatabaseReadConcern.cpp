#include "DatabaseReadConcern.h"

FDatabaseReadConcern::FDatabaseReadConcern() {
    this->Level = EMongoReadConcernLevel::Local;
}

