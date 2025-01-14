﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FunctionsExporter.h"
#include "FPropertyExporter.generated.h"

UCLASS()
class CSHARPFORUE_API UFPropertyExporter : public UFunctionsExporter
{
	GENERATED_BODY()

public:

	// UFunctionsExporter interface implementation
	virtual void ExportFunctions(FRegisterExportedFunction RegisterExportedFunction) override;
	// End

private:
	
	static FProperty* GetNativePropertyFromName(UStruct* Struct, const char* PropertyName);
	static int32 GetPropertyOffsetFromName(UStruct* InStruct, const char* InPropertyName);
	static int32 GetPropertyArrayDimFromName(UStruct* InStruct, const char* PropertyName);
	
};
