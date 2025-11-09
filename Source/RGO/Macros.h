#pragma once

#define CHECK_FIELD(FieldName)                                                                                         \
    if (!(FieldName))                                                                                                  \
    {                                                                                                                  \
        UE_LOG(LogTemp, Error, TEXT("[%s] Field '%s' is not set!"), *GetName(), TEXT(#FieldName));        \
    }
