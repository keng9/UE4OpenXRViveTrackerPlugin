#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IInputDeviceModule.h"

//enum class EHandKeypoint : uint8;
//enum class EControllerHand : uint8;


class OPENXRVIVETRACKER_API IOpenXRViveTrackerModule : public IInputDeviceModule
{
public:
	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IOpenXRViveTrackerModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IOpenXRViveTrackerModule>("OpenXRViveTracker");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("OpenXRViveTracker");
	}

	/** Returns whether the specified tracker is currently tracked */
	virtual bool IsTrackerTracked(const FName& MotionSource) = 0;

	/** Gets a shared pointer to the input device created by the module */
	virtual TSharedPtr<IInputDevice> GetInputDevice() = 0;
};
