#pragma once

#define CHECK_FIELD(FieldName)                                                                                         \
    if (!(FieldName))                                                                                                  \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT("[%s LINE %d] Field '%s' is not set!"), *GetName(), __LINE__,               \
            TEXT(#FieldName));                                                                                         \
    }

#define CHECK_INDEX_NONE(IndexValue)                                                                                   \
    if ((IndexValue) < 0.f)                                                                                            \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT("[%s LINE %d] Index '%s' is INDEX_NONE!"), *GetName(), __LINE__,            \
            TEXT(#IndexValue));                                                                                        \
    }

#define CHECK_FUNCTION(FunctionCall)                                                                                   \
    {                                                                                                                  \
        bool bResult = FunctionCall;                                                                                   \
        if (!bResult)                                                                                                  \
        {                                                                                                              \
            UE_LOG(LogTemp, Error, TEXT("[%s LINE %d] Function '%s' returned false!"), *FString(__FUNCTION__),         \
                __LINE__, TEXT(#FunctionCall));                                                                        \
        }                                                                                                              \
    }

//    UE_LOG(LogTemp, Error, TEXT(""));