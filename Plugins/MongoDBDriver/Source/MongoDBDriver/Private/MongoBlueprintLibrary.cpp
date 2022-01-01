#include "MongoBlueprintLibrary.h"

uint8 UMongoBlueprintLibrary::ToUint8(const FDocumentValue& DocumentValue) {
    return 0;
}

FString UMongoBlueprintLibrary::ToString(const FDocumentValue& DocumentValue) {
    return TEXT("");
}

FObjectId UMongoBlueprintLibrary::ToObjectId(const FDocumentValue& DocumentValue) {
    return FObjectId{};
}

TMap<FString, FDocumentValue> UMongoBlueprintLibrary::ToMap(const FDocumentValue& DocumentValue) {
    return TMap<FString, FDocumentValue>();
}

FString UMongoBlueprintLibrary::ToJson(const FDocumentValue& DocumentValue) {
    return TEXT("");
}

int64 UMongoBlueprintLibrary::ToInt64(const FDocumentValue& DocumentValue) {
    return 0;
}

int32 UMongoBlueprintLibrary::ToInt32(const FDocumentValue& DocumentValue) {
    return 0;
}

float UMongoBlueprintLibrary::ToFloat(const FDocumentValue& DocumentValue) {
    return 0.0f;
}

bool UMongoBlueprintLibrary::ToBool(const FDocumentValue& DocumentValue) {
    return false;
}

TArray<FDocumentValue> UMongoBlueprintLibrary::ToArray(const FDocumentValue& DocumentValue) {
    return TArray<FDocumentValue>();
}

void UMongoBlueprintLibrary::SwitchOnType(const FDocumentValue& DocumentValue, EDocumentValueType& Branches) {
}

FString UMongoBlueprintLibrary::ObjectIdToString(const FObjectId& ObjectId) {
    return TEXT("");
}

FObjectId UMongoBlueprintLibrary::MakeObjectId(const FString& Value) {
    return FObjectId{};
}

bool UMongoBlueprintLibrary::IsUndefined(const FDocumentValue& DocumentValue) {
    return false;
}

bool UMongoBlueprintLibrary::IsNull(const FDocumentValue& DocumentValue) {
    return false;
}

EDocumentValueType UMongoBlueprintLibrary::GetType(const FDocumentValue& DocumentValue) {
    return EDocumentValueType::Int32;
}

FDocumentValue UMongoBlueprintLibrary::FromUint8(uint8 Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromString(const FString& Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromObjectId(const FObjectId& Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromNull() {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromMap(const TMap<FString, FDocumentValue>& Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromJSON(const FString& Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromInt64(int64 Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromInt32(int32 Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromFloat(float Value) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromBool(bool bValue) {
    return FDocumentValue{};
}

FDocumentValue UMongoBlueprintLibrary::FromArray(const TArray<FDocumentValue>& Value) {
    return FDocumentValue{};
}

UMongoBlueprintLibrary::UMongoBlueprintLibrary() {
}

