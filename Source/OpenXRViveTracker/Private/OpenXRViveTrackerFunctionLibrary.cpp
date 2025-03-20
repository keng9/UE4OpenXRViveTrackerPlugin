#include "OpenXRViveTrackerFunctionLibrary.h"
#include "IOpenXRViveTrackerModule.h"

bool UOpenXRViveTrackerFunctionLibrary::IsTrackerTracked(FName MotionSource)
{
	if (IOpenXRViveTrackerModule::IsAvailable())
	{
		return IOpenXRViveTrackerModule::Get().IsTrackerTracked(MotionSource);
	}

	return false;
} 