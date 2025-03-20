#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OpenXRViveTrackerFunctionLibrary.generated.h"

/**
 * Utility functions for interacting with Vive Trackers
 */
UCLASS()
class OPENXRVIVETRACKER_API UOpenXRViveTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Check if a specific tracker is currently tracked
	 * @param MotionSource - The tracker motion source to check (e.g. Tracker_Waist, Tracker_Foot_Left)
	 * @return True if the tracker is currently tracked
	 */
	UFUNCTION(BlueprintCallable, Category = "OpenXR|Vive Tracker")
	static bool IsTrackerTracked(FName MotionSource);
}; 