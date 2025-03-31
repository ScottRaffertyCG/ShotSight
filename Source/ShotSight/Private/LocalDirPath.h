#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocalDirPath.generated.h"

 // Wrapper struct that contains a directory path, allowing it to be used with custom metadata.
// Directory path that can be set in the editor and accessed in Blueprints. Note the meta = ContentDir which is essential for getting the correct user experience
USTRUCT(BlueprintType)
struct SHOTSIGHT_API FDirectoryPathWrapper
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom", meta = (ContentDir, DisplayName = "Shots Folder"))
    FDirectoryPath DirectoryPath;
};

 // ULocalDirectoryPath is a simple class to hold a wrapped directory path and expose it to Blueprints.
UCLASS(Blueprintable, BlueprintType)
class SHOTSIGHT_API ULocalDirectoryPath : public UObject
{
    GENERATED_BODY()

public:
    // Wrapped directory path that can be set in the editor and accessed in Blueprints
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
    FDirectoryPathWrapper MyDirectoryPath;

    // Sets the directory path
    UFUNCTION(BlueprintCallable, Category = "Custom")
    void SetDirectoryPath(const FString& NewPath) { MyDirectoryPath.DirectoryPath.Path = NewPath; }

    // Gets the directory path
    UFUNCTION(BlueprintCallable, Category = "Custom")
    FString GetDirectoryPath() const { return MyDirectoryPath.DirectoryPath.Path; }
};
